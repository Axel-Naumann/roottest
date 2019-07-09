# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(ROOT6440 ROOT6440.h SELECTION ROOT6440_selection.xml)

ROOTTEST_ADD_TEST(ROOT6440
                  MACRO runROOT6440.C
                  DEPENDS ${GENERATE_REFLEX_TEST})
