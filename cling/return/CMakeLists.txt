# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(constRetrunTest
                  MACRO run.C
                  WILLFAIL
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(barna
                  MACRO barna.C
                  OUTREF barna.ref
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(exitcode
                  MACRO exitcode.C
                  PASSRC 12
                  LABELS roottest regression cling)
