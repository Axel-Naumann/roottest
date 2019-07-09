# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(warnMe warnMe.h SELECTION warnMe_selection.xml)

ROOTTEST_ADD_TEST(exec5596
                  MACRO exec5596.C
                  OUTREF exec5596.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})
