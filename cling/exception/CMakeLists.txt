# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

if(${CMAKE_SYSTEM_PROCESSOR} MATCHES "arm")
  ROOTTEST_ADD_TEST(nullderef-macro
                    MACRO nullderef.C
                    PASSRC 1
                    LABELS roottest regression cling)
endif()

ROOTTEST_ADD_TEST(nullderef-e
                  COMMAND root -l -b -q -e 'int*p=nullptr;*p'
                  PASSRC 1
                  LABELS roottest regression cling)
