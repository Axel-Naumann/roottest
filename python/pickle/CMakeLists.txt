# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

if(ROOT_python_FOUND)
  ROOTTEST_ADD_TEST(write
                    MACRO PyROOT_writetests.py
                    COPY_TO_BUILDDIR PickleTypes.C
                    PRECMD ${ROOT_root_CMD} -b -q -l -e .L\ PickleTypes.C+
                    ${PYTESTS_WILLFAIL})

  ROOTTEST_ADD_TEST(read
                    MACRO PyROOT_readtests.py
                    DEPENDS write
                    ${PYTESTS_WILLFAIL})
endif()
