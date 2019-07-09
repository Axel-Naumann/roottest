# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TESTDIRS()

ROOTTEST_GENERATE_REFLEX_DICTIONARY(attributesFromTypedef attributesFromTypedef.h SELECTION attributesFromTypedef_selection.xml)

ROOTTEST_ADD_TEST(attributesFromTypedef
                  MACRO execattributesFromTypedef.C
                  OUTREF execattributesFromTypedef.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})
