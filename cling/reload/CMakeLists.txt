# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

#ROOTTEST_ADD_TEST(reloadvector
#                  MACRO runreloadvector.C
#                  OUTREF reloadvector.ref
#                  LABELS roottest regression cling)
                  
                  
ROOTTEST_ADD_TEST(ROOT-7364
                  MACRO assertROOT7364.C
                  LABELS roottest regression cling)
