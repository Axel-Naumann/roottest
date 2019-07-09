# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

if(ROOT_python_FOUND)
  if (ROOT_pyroot_experimental_FOUND)
    set(exp_pyroot True)
  else()
    set(exp_pyroot False)
  endif()
endif()

ROOTTEST_ADD_TESTDIRS()
