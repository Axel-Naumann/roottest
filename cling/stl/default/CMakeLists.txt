# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_DICTIONARY(dict mylist.C LINKDEF LinkDef.h)

ROOTTEST_ADD_TEST(defaultArgTest
                  COPY_TO_BUILDDIR mylist.C
                  MACRO build.C
                  LABELS roottest regression cling)

if(ClingWorkAroundJITandInline)
  set(testcint OUTREF_CINTSPECIFIC) 
else()
  set(testcint OUTREF)
endif()

ROOTTEST_ADD_TEST(VectorSort
                  MACRO VectorSort.C
                  ${testcint} VectorSort.ref
                  # OUTCNV VectorSort_convert.sh
                  LABELS roottest regression cling)
