# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

if(ROOT_runtime_cxxmodules_FOUND)
  set(excluded_rtcxxmod_tests friend fastcloningeventtree)
  ROOTTEST_ADD_TESTDIRS(EXCLUDED_DIRS ${excluded_rtcxxmod_tests})
else()
  set(excluded_tests fastcloningeventtree)
  ROOTTEST_ADD_TESTDIRS(EXCLUDED_DIRS ${excluded_tests})
endif()
