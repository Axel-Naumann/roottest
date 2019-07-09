# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(testInversion
                  MACRO ${ROOT_SOURCE_DIR}/math/smatrix/test/testInversion.cxx+)

ROOTTEST_ADD_TEST(testKalman
                  MACRO ${ROOT_SOURCE_DIR}/math/smatrix/test/testKalman.cxx+)

ROOTTEST_ADD_TEST(testOperations
                  MACRO ${ROOT_SOURCE_DIR}/math/smatrix/test/testOperations.cxx+)

ROOTTEST_ADD_TEST(testSMatrix
                  MACRO ${ROOT_SOURCE_DIR}/math/smatrix/test/testSMatrix.cxx+)
