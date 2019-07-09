# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(One One.h SELECTION One_selection.xml NO_ROOTMAP)
set(depends ${GENERATE_REFLEX_TEST})

ROOTTEST_GENERATE_REFLEX_DICTIONARY(Two Two.h SELECTION Two_selection.xml NO_ROOTMAP)
set(depends ${depends} ${GENERATE_REFLEX_TEST})

ROOTTEST_ADD_TEST(execLoadLibs
                  MACRO execLoadLibs.C
                  OUTREF execLoadLibs.oref
                  ERRREF execLoadLibs.eref
                  DEPENDS ${depends})
