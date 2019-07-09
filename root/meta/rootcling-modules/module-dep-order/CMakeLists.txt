# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

set(ENV{ROOT_MODULES} 1)
ROOTTEST_ADD_TEST(cxxmodules-implicit-build-error
                  COMMAND ${ROOT_rootcling_CMD} -f ${CMAKE_CURRENT_BINARY_DIR}/out.cxx -cxxmodule
                          implicit_build.h
                          implicit_build_linkdef.h
                  WORKING_DIR ${CMAKE_CURRENT_SOURCE_DIR}
                  PASSREGEX "Had to build non-system module A implicitly")
