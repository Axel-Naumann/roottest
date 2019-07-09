# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_COMPILE_MACRO(t01.C)

ROOTTEST_ADD_TEST(Run
                  MACRO Run.C
                  DEPENDS ${COMPILE_MACRO_TEST}
                  WILLFAIL
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(t02
                  MACRO t02.C
                  WILLFAIL
                  LABELS roottest regression cling)
