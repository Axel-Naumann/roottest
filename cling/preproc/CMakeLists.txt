# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(runCPPComments
                  MACRO runCPPComments.C
                  OUTREF CPPComments.ref
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(MissingInclude
                  MACRO MissingInclude.C
                  LABELS roottest regression cling)
