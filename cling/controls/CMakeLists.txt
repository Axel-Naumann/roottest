# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(runLoopbreak
                  COPY_TO_BUILDDIR loopbreak.C
                  MACRO runLoopbreak.C
                  OUTREF Loopbreak.ref
                  LABELS roottest regression cling)
