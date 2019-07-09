# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

if(ROOT_python_FOUND)
  ROOTTEST_ADD_TEST(pythonizations
                    MACRO PyROOT_pythonizationtest.py
                    COPY_TO_BUILDDIR Pythonizables.C Pythonizables.h
                    PRECMD ${ROOT_root_CMD} -b -q -l -e .L\ Pythonizables.C+
                    ${PYTESTS_WILLFAIL})

  ROOTTEST_ADD_TEST(smartptr
                    MACRO PyROOT_smartptrtest.py
                    COPY_TO_BUILDDIR SmartPtr.C SmartPtr.h
                    PRECMD ${ROOT_root_CMD} -b -q -l -e .L\ SmartPtr.C+
                    ${PYTESTS_WILLFAIL})
endif()
