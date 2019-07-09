# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

if(ROOT_python_FOUND)
  ROOTTEST_ADD_TEST(stl
                    MACRO PyROOT_stltests.py
                    COPY_TO_BUILDDIR StlTypes.C
                    PRECMD ${ROOT_root_CMD} -b -q -l -e .L\ StlTypes.C+
                    ${PYTESTS_WILLFAIL})
endif()
