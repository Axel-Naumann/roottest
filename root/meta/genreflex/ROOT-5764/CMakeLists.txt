# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(classes classes.h SELECTION classes_selection.xml)

ROOTTEST_ADD_TEST(execLibLoad
                  MACRO execLibLoad.C
                  OUTREF execLibLoad.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})
