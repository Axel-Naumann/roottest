# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

if(ROOT_python_FOUND)
  ROOTTEST_ADD_TEST(function
                    MACRO PyROOT_functiontests.py
                    COPY_TO_BUILDDIR InstallableFunction.C GlobalFunction.C GlobalFunction2.C GlobalFunction3.C
                    PRECMD ${ROOT_root_CMD} -b -q -l -e .L\ InstallableFunction.C+
                                             -e .L\ GlobalFunction2.C+
                                             -e .L\ GlobalFunction3.C+
                    ENVIRONMENT EXP_PYROOT=${exp_pyroot})
endif()
