# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

if(ROOT_mathmore_FOUND)
ROOTTEST_ADD_TEST(testLoadLibMathMore
                  OUTREF testLoadLibMathMore.ref	
                  MACRO testLoadLibMathMore.C)
endif()
