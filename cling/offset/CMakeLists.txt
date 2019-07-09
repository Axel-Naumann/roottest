# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(interpreted
                  MACRO runvbase.C
                  OUTREF vbase-i.out.ref
                  ERRREF vbase-i.err.ref
                  LABELS roottest regression cling)

ROOTTEST_COMPILE_MACRO(runvbase.C)
ROOTTEST_ADD_TEST(compiled
                  MACRO runvbase.C+
                  OUTREF vbase-c.out.ref
                  ERRREF vbase-c.err.ref
                  LABELS roottest regression cling
                  DEPENDS ${COMPILE_MACRO_TEST})
