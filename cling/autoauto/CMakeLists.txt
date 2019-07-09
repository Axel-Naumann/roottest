# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_AUTOMACROS()

ROOTTEST_ADD_TEST(ROOT8442
                  MACRO ROOT8442.C
                  ERRREF ROOT8442.errref
                  PASSRC 1
                  LABELS roottest regression cling)
