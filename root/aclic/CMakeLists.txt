# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TESTDIRS()

# Define the test from parent directory since add_test() seems to ignore it when is defined there
 ROOTTEST_ADD_TEST(withspace-runthetest
                  MACRO with\ space/runthetest.C
                  OUTREF with\ space/thetest.ref)
