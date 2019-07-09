# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_REFLEX_DICTIONARY(classInNamespace classInNamespace.h
                                    SELECTION classInNamespace_selection.xml
                                    LIBNAME libclassInNamespace_dictrflx
                                    NO_ROOTMAP)

#---Copy from source to binary some of the files
configure_file(classInNamespace.rootmap . COPYONLY)

ROOTTEST_ADD_AUTOMACROS(DEPENDS ${GENERATE_REFLEX_TEST})
