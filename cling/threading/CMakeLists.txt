# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(clinglock
                  MACRO clinglock.C
                  OPTS -t
                  LABELS roottest cling)

ROOTTEST_ADD_TEST(clinglock_staticinit
                  MACRO clinglock_staticinit.C
                  OPTS -t
                  LABELS roottest cling)
