# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

#--- ROOT_SOURCE_DIR is required-----------------------------------------------

if(ROOT_cintex_FOUND) 

  set(CINTEXTEST_DIR ${ROOT_SOURCE_DIR}/cint/cintex/test)
  REFLEX_GENERATE_DICTIONARY(CintexTest ${CINTEXTEST_DIR}/dict/CintexTest.h SELECTION ${CINTEXTEST_DIR}/dict/selection.xml OPTIONS --comments )
  ROOT_COMPILE_MACRO(CintexTestDict CintexTest_dict.cpp LIBRARIES Reflex)

  ROOT_ADD_TEST(cling-cintex-build 
                SOURCE_DIR ${CMAKE_SOURCE_DIR}
                BINARY_DIR ${CMAKE_BINARY_DIR}
                BUILD  CintexTestDict)                                              
  ROOT_ADD_TEST(cling-cintex-cintex 
                COMMAND root -b -q -l ${CINTEXTEST_DIR}/test_Cintex.C
                FAILREGEX "Test failed"
                DEPENDS cling-cintex-build)
  ROOT_ADD_TEST(cling-cintex-persistency 
                COMMAND root -b -q -l ${CINTEXTEST_DIR}/test_Persistency.C
                FAILREGEX "Test failed"
                DEPENDS cling-cintex-build)
  ROOT_ADD_TEST(cling-cintex-pycintex
                COMMAND  ${PYTHON_EXECUTABLE} ${CINTEXTEST_DIR}/test_PyCintex_basics.py - -b
                FAILREGEX "Test failed"
                DEPENDS cling-cintex-build)

endif()
                                
