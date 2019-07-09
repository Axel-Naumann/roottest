# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

#ROOTTEST_GENERATE_REFLEX_DICTIONARY(classes_rflx classes.h SELECTION classes_selection.xml)

#ROOTTEST_ADD_TEST(execdummy
#                  MACRO execdummy.C
#                  OUTREF execdummy.ref
#                  DEPENDS ${GENERATE_REFLEX_TEST})

ROOTTEST_ADD_TEST(5626
                  COMMAND ${ROOT_genreflex_CMD} ${CMAKE_CURRENT_SOURCE_DIR}/classes.h -o  classes.cxx
                          --select=${CMAKE_CURRENT_SOURCE_DIR}/classes_selection.xml -I ${CMAKE_CURRENT_SOURCE_DIR})
