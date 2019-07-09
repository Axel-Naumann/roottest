# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(Tau Tau.h SELECTION Tau_selection.xml)

ROOTTEST_ADD_TEST(execlibLoad
                  MACRO execLibLoad.C
                  OUTREF execLibLoad.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})
