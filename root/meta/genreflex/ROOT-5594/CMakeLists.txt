# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

#ROOTTEST_GENERATE_REFLEX_DICTIONARY(AliaODPid AliAODPid.h SELECTION AliAODPid_selection.xml)
#
#ROOTTEST_ADD_TEST(execdummy
#                  MACRO execdummy.C
#                  OUTREF execdummy.ref
#                  DEPENDS ${GENERATE_REFLEX_TEST})

ROOTTEST_ADD_TEST(5594
                  COMMAND ${ROOT_genreflex_CMD} ${CMAKE_CURRENT_SOURCE_DIR}/AliAODPid.h
                               -o  AliAODPid.cxx 
                               --select=${CMAKE_CURRENT_SOURCE_DIR}/AliAODPid_selection.xml)
