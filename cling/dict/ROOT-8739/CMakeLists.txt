# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_DICTIONARY(nextDict       next.h       LINKDEF nextLinkDef.h)

ROOTTEST_ADD_TEST(execNextTest
                  MACRO execNextTest.C
                  OUTREF NextTest.ref
                  DEPENDS nextDict-build
                  LABELS roottest regression cling)
