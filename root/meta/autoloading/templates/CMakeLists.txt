# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(classes classes.h SELECTION classes_selection.xml NO_ROOTMAP)
set(depends ${GENERATE_REFLEX_TEST})

ROOTTEST_GENERATE_REFLEX_DICTIONARY(classes2 classes2.h SELECTION classes2_selection.xml NO_ROOTMAP)
set(depends ${depends} ${GENERATE_REFLEX_TEST})

#---Copy from source to binary some of the files
configure_file(theRootmap.rootmap . COPYONLY)

ROOTTEST_ADD_AUTOMACROS(DEPENDS ${depends})
