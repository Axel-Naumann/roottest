# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(run
                  MACRO run.C
                  COPY_TO_BUILDDIR add.C)

ROOTTEST_ADD_TEST(runcopy
                  MACRO runcopy.C+
                  OUTREF copy.ref)

ROOTTEST_ADD_TEST(runProjections
                  MACRO runProjections.C
                  OUTREF Projections.ref)

ROOTTEST_ADD_TEST(runsparse
                  MACRO runsparse.C
                  OUTREF sparse.ref)
