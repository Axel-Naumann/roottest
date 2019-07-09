# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(cmswrapper cmswrapper.h SELECTION sel.xml)
set(depends ${GENERATE_REFLEX_TEST})

ROOTTEST_ADD_AUTOMACROS(DEPENDS ${depends})
