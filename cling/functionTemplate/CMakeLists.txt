# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(cintrun
                  MACRO cintrun.C
                  OUTREF cintrun.ref-cling
                  DEPENDS t.h
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(runreferenceuse
                  MACRO runreferenceUse.C
                  OUTREF referenceUse.ref
                  DEPENDS MyClassReferenceUse.C
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(testcint
                  MACRO testcint.py
                  PRECMD root -b -q -l -e .L\ t.h+
                  OUTREF pythoncintrun.ref
                  OUTCNVCMD grep -v "just a comment"
                  WORKING_DIR ${CMAKE_CURRENT_SOURCE_DIR}
                  LABELS roottest regression cling
                  ${PYTESTS_WILLFAIL})

if(ROOT_cintex_FOUND)
  ROOTTEST_ADD_TEST(testreflex
                    MACRO testreflex.py
                    OUTREF pythonreflexrun.ref
                    OUTCNVCMD grep -v "just a comment"
                    LABELS roottest regression cling)
endif()
