#include "TFile.h"
#include "RConfig.h"

extern "C" uint32_t lzma_version_number(void);

constexpr bool kIs32bits = sizeof(long) == 4;

#ifdef R__HAS_DEFAULT_LZ4
constexpr int expectedcomplevel = 404;
#else
constexpr int expectedcomplevel = 101;
#endif

int testMergedFile(const char *filename, Int_t compSetting, Long64_t fileSize, UInt_t tolerance = 0)
{
   TFile *file = TFile::Open(filename);
   if (file == nullptr || file->IsZombie()) {
      Error("testSimpleFile", "Could not open %s.",filename);
      return 1;
   }
   file->ls();
   file->cd("hist");
   gDirectory->ls();
   gDirectory->Get("Gaus")->Print();
   file->cd("named");
   gDirectory->ls();
   file->Get("MyList")->Print();

   if (file->GetCompressionSettings() != compSetting) {
      Error("execTestMultiMerge","Compression level of %s should have been %d but is %d\n",file->GetName(), expectedcomplevel, file->GetCompressionSettings() );
      return 3;
   }

   if (abs(file->GetSize()-fileSize) > tolerance) {
      Error("execTestMultiMerge","Disk size of %s should have been %lld but is %lld (tolerance %u bytes)\n",file->GetName(), fileSize, file->GetSize(), tolerance );
      return 4;
   }

   delete file;

   return 0;
}

int testSimpleFile(const char *filename, Long64_t entries, Int_t compSetting, Long64_t fileSize, UInt_t tolerance = 0)
{
   fprintf(stdout,"Checking %s\n",filename);
   TFile *file = TFile::Open(filename);
   if (file == nullptr || file->IsZombie()) {
      Error("testSimpleFile", "Could not open %s.",filename);
      return 1;
   }
   //file->ls();
   if (file->GetCompressionSettings() != compSetting) {
      Error("testSimpleFile","Compression level of %s should have been %d but is %d\n",file->GetName(), expectedcomplevel, file->GetCompressionSettings() );
      return 100;
   }


   if (abs(file->GetSize()-fileSize) > tolerance) {
      Error("testSimpleFile","Disk size of %s should have been %lld but is %lld (tolerance %u bytes)\n",file->GetName(), fileSize, file->GetSize(), tolerance);
      return 1000;
   }

   TTree *ntuple;
   file->GetObject("ntuple",ntuple);
   if (ntuple == 0) {
      Error("testSimpleFile", "Could not retrieve ntuple from %s.",file->GetName());
      return 10;
   }
   if (ntuple->GetEntries() != entries) {
      Error("testSimpleFile","Number of entries in ntuple in %s should have been %lld but is %lld\n",file->GetName(), entries, ntuple->GetEntries());
      return 10000;
   }
   delete file;

   return 0;
}


int execTestMultiMerge()
{
#ifdef R__FAST_MATH
   // Increasing tolerance due test fail for fast-math builds
   bool fastMath = true;
#else
   bool fastMath = false;
#endif

#ifdef R__HAS_DEFAULT_LZ4
   // Enabling extra pedestrial values in case kLZ4 is default
   bool lz4default = true;
#else
   bool lz4default = false;
#endif
   Int_t result = 0;
   int hsimpleFTolerance = 16;
   result += testMergedFile("mzfile1-4.root",206,4455 + lz4default*841 + kIs32bits*8 - kIs32bits*lz4default*16, kIs32bits ? 2 : 0);
   result += testMergedFile("mlz4file1-4.root",406,5395 + lz4default*841 + kIs32bits*2 - kIs32bits*lz4default*16, kIs32bits ? 2 : 0);
   result += testMergedFile("mzlibfile1-4.root",106,4565 + lz4default*841 + kIs32bits*7 - kIs32bits*lz4default*16, kIs32bits ? 2 : 0);
   result += testSimpleFile("hsimple.root",25000,expectedcomplevel,414668 + lz4default*104060 + kIs32bits*2 + kIs32bits*lz4default*19, kIs32bits ? (12 + fastMath*10) : (8 + fastMath*10));
   result += testSimpleFile("hsimple9.root",25000,9,430858 + lz4default*86230 + kIs32bits*15 - kIs32bits*lz4default*8,4 + fastMath*27);
   result += testSimpleFile("hsimple101.root",25000,101,414856 + lz4default*1667, kIs32bits ? 12 : (3 + fastMath*14));
   result += testSimpleFile("hsimple106.root",25000,106,431158 + lz4default*1931 + kIs32bits*12,3 + fastMath*20);
   result += testSimpleFile("hsimple109.root",25000,109,430868 + lz4default*1931 + kIs32bits*14,3 + fastMath*28);
   result += testSimpleFile("hsimple9x2.root",2*25000,9,849968 + lz4default*169479 + kIs32bits*10,9 + fastMath*56);
   result += testSimpleFile("hsimple109x2.root",2*25000,109,849978 + lz4default*1931 + kIs32bits*15,9 + fastMath*52);
   result += testSimpleFile("hsimple209.root",25000,209,392593 + lz4default*1931,8 + fastMath*24);
   result += testSimpleFile("hsimple401.root",25000,401,418775 + lz4default*102982,8 + fastMath*31);
   result += testSimpleFile("hsimple406.root",25000,406,516936 + lz4default*1931,8);
   result += testSimpleFile("hsimple409.root",25000,409,516846 + lz4default*1931,8);
   result += testSimpleFile("hsimpleK.root",6*25000,209,2297480 + lz4default*1931,16 + fastMath*120);
   if (lzma_version_number() < 50020010) {
      // lzma v5.2.0 produced larger files ...
      // but even older version (eg v5.0.0) produced smaller files ...
      result += testSimpleFile("hsimpleK202.root",12*25000,202,4630084 + lz4default*1931,700);
   } else {
      result += testSimpleFile("hsimpleK202.root",12*25000,202,4630084 + lz4default*1931,16 + fastMath*104);
   }
   result += testSimpleFile("hsimpleK409.root",24*25000,409,12046966 + lz4default*1931,16);
   result += testSimpleFile("hsimpleF.root",30*25000,9,12581306 + lz4default*2472134,hsimpleFTolerance + fastMath*1090);
   return result;
}
