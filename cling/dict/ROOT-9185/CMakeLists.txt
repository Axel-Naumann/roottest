# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(ROOT9185
                  EXEC rootcling
                  OPTS -v2 -f ROOT9185Dict.cxx -s ROOT9185Dict.so -rml ROOT9185Dict.so -rmf ROOT9185Dict.rootmap ROOT9185.h ${CMAKE_CURRENT_SOURCE_DIR}/ROOT9185Linkdef.h
                  COPY_TO_BUILDDIR ROOT9185.h)
