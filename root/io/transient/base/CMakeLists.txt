# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.


include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_ROOTTEST_NOROOTMAP OFF)
ROOT_GENERATE_DICTIONARY(base_cling ${CMAKE_CURRENT_SOURCE_DIR}/base.h MODULE base LINKDEF baseLinkDef.h)
ROOT_LINKER_LIBRARY(base base_cling.cxx testobject.cpp testobjectderived.cpp TEST LIBRARIES Core RIO)

set(RootExeOptions -e "gSystem->Load(\"libbase\")")   # Adding a ; to avoid the output is complicated

ROOTTEST_ADD_TEST(WriteFile
                  PRECMD ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target base${fast}
                  MACRO execWriteFile.cxx+
                  OUTREF execWriteFile.ref)
if(${compression_default} STREQUAL "lz4")
	ROOTTEST_ADD_TEST(hadd_autoload
                  	COMMAND hadd -f data_merge.root data1.root data2.root
                  	OUTREF hadd_autoloadLZ4.ref
                  	DEPENDS WriteFile)
else()
	ROOTTEST_ADD_TEST(hadd_autoload
                  	COMMAND hadd -f data_merge.root data1.root data2.root
                  	OUTREF hadd_autoloadZLIB.ref
                  	DEPENDS WriteFile)
endif()
