# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TESTDIRS()

ROOTTEST_GENERATE_REFLEX_DICTIONARY(DataModelV2genreflex DataModelV2genreflex.h SELECTION DataModelV2genreflex_selection.xml)

ROOTTEST_ADD_TEST(DataModelV2genreflex
                  MACRO execSimpleIoRule.C
                  OUTREF execSimpleIoRule.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})
