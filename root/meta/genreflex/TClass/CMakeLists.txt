# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(basic_allClasses basic_allClasses.h SELECTION basic_allClasses_selection.xml)

ROOTTEST_ADD_TEST(execbasic
                  MACRO execbasic.C
                  OUTREF execbasic.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})
