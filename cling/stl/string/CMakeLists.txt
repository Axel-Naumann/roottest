# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(runcint
                  MACRO runcint.C
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(stringPassingText
                  MACRO run.C
                  OUTREF passing.ref
                  DEPENDS t01.C
                  LABELS roottest regression cling)
