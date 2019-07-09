# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(runarrayhist
                  MACRO runarrayhist.C
                  OUTREF arrayhist.ref
                  WILLFAIL
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(runcomplex
                  MACRO runcomplex.C
                  OUTREF complex.ref
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(runhenry
                  COPY_TO_BUILDDIR henry.dat
                  MACRO runhenry.C
                  OUTREF henry.ref
                  LABELS roottest regression cling)
