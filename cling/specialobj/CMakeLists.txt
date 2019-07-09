# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(assertGPad
                  MACRO assertGPad.C
                  OUTREF assertGPad.ref
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(stlwrite
                  MACRO write.C
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(argtwice
                  MACRO argeval.C
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(stlProxies
                  MACRO runstlProxies.C
                  OUTREF stlProxies.ref
                  DEPENDS stlwrite
                  LABELS roottest regression cling)

if(${CMAKE_SYSTEM_PROCESSOR} MATCHES "arm")
  ROOTTEST_ADD_TEST(runf02
                    MACRO runf02.C
                    OUTCNVCMD sed -e s,input_line_[0-9]*,input_line_FILTERED,g
                    OUTREF f02.ref
                    LABELS roottest regression cling)
endif()

ROOTTEST_ADD_TEST(reread
                  MACRO reread.C
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(unhappy
                  MACRO unhappy.C
                  ERRREF unhappy.eref
                  PASSRC 1
                  LABELS roottest regression cling)
