# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(nestedTemplate
                                    nestedTemplate.h
                                    SELECTION sel1.xml)

ROOTTEST_GENERATE_REFLEX_DICTIONARY(nestedTemplateClone
                                    nestedTemplate_clone.h
                                    SELECTION sel2.xml)

ROOTTEST_ADD_TEST(nestedTemplate
                  MACRO execnestedTemplate.C
                  OUTREF nestedTemplate.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})

ROOTTEST_GENERATE_REFLEX_DICTIONARY(nestedClasses
                                    nestedClasses.h
                                    SELECTION nestedClasses_selection.xml)
ROOTTEST_ADD_TEST(nestedClasses
                  MACRO execNestedClasses.C
                  OUTREF execNestedClasses.ref
                  DEPENDS ${GENERATE_REFLEX_TEST})
