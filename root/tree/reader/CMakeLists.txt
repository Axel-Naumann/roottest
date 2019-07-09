# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

#-------------------------------------------------------------------------------
#
# Placeholder file to translate the tests to the new CTest system. Meanwhile we
# define a CTest test that calls 'make' in ${CMAKE_CURRENT_SOURCE_DIR}
#
#-------------------------------------------------------------------------------
ROOTTEST_ADD_OLDTEST()
ROOTTEST_ADD_TESTDIRS()

# ROOT-10046
ROOTTEST_ADD_TEST(test_oddName
                  COPY_TO_BUILDDIR root-10046.root
                  MACRO oddName.C)

# ROOT-9757
ROOTTEST_ADD_TEST(test_numberBranchesRead
                  MACRO  test_numberBranchesRead.C
                  MACROARG "\"${CMAKE_CURRENT_SOURCE_DIR}/../../dataframe/Slimmed_TotemNTuple_9883.040.ntuple.root\"")
