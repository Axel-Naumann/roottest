# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

# ROOT-7879
ROOTTEST_ADD_TEST(skipLinkDefDict
                  COMMAND ${ROOT_rootcling_CMD} -f libSkippingDict.cxx -rmf libSkipping.rootmap -rml libSkipping.so  ${CMAKE_CURRENT_SOURCE_DIR}/skippingHeader.h ${CMAKE_CURRENT_SOURCE_DIR}/skipLinkDef.h
                  OUTREF skipLinkDefDict.ref)


ROOTTEST_ADD_TEST(skipLinkDef
                  COMMAND grep clingAutoload libSkippingDict.cxx
                  DEPENDS skipLinkDefDict
                  OUTREF skippingDict.ref)

ROOTTEST_ADD_TESTDIRS()
