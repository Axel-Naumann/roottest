# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(classes SELECTION classes_selection.xml classes.h)

ROOTTEST_ADD_TEST(exec5627
                  MACRO exec5627.C
                  OUTREF exec5627.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})
