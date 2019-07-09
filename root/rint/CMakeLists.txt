# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

if(${CMAKE_SYSTEM_PROCESSOR} MATCHES "arm")
  ROOTTEST_ADD_TEST(TabCom
                    COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/driveTabCom.py
                    INPUT TabCom_input.txt
                    OUTCNV filterOpt.sh
                    OUTREF TabCom.oref
                    ERRREF TabCom.eref
                    COPY_TO_BUILDDIR MyClass.h)
endif()
