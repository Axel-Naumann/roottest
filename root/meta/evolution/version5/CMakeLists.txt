# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(execNestedColl
                  COPY_TO_BUILDDIR nestedColl.root
                  MACRO execNestedColl.cxx+
                  OUTREF execNestedColl.ref)
