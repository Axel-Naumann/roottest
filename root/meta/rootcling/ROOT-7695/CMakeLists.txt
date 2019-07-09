# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(7695
                  COMMAND ${ROOT_rootcling_CMD} -f AliEveITSDigitsInfo_cling.cxx
                          ${CMAKE_CURRENT_SOURCE_DIR}/AliEveITSDigitsInfo.h
                          ${CMAKE_CURRENT_SOURCE_DIR}/AliEveITSDigitsInfo_linkdef.h)
