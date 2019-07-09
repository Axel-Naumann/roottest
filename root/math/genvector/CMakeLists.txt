# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

if(ROOT_genvector_FOUND)
  foreach(test coordinates3D coordinates4D rotationApplication testGenVector)
    ROOTTEST_ADD_TEST(${test} MACRO ${ROOT_SOURCE_DIR}/math/genvector/test/${test}.cxx+)
  endforeach()
endif()
