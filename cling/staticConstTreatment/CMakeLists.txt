# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(myClass myClass.h SELECTION myClass_selection.xml)

set(dependencies ${GENERATE_REFLEX_TEST})

ROOTTEST_GENERATE_REFLEX_DICTIONARY(Odin Odin.h SELECTION Odin_selection.xml)

set(dependencies ${dependencies} ${GENERATE_REFLEX_TEST})

ROOTTEST_ADD_TEST(execStaticConst
                  MACRO execStaticConst.C
                  OUTREF execStaticConst.ref
                  DEPENDS ${dependencies}
                  WILLFAIL
                  LABELS roottest regression cling)
