# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_GENERATE_DICTIONARY(dict.C testing.C LINKDEF LinkDef.h)

ROOTTEST_ADD_TEST(badOperator
                  MACRO badOperator.C
                  OUTREF badOperatorTest.ref
                  DEPENDS MyOpClass.C
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(stringMap
                  MACRO stringMap.cxx
                  OUTREF stringMapTest.ref
                  DEPENDS stringMapLoad.cxx
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(badstringMap
                  MACRO badstringMap.cxx
                  OUTREF badstringMapTest.ref
                  DEPENDS MyClass.C
                  LABELS roottest regression cling)
