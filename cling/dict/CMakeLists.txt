# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

ROOTTEST_ADD_TEST(rundefaultargs-interpreted
                  MACRO rundefaultargs.C
                  OUTREF defaultargs_interpreted.ref
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(rundefaultargs-compiled
                  MACRO rundefaultargs.C+
                  OUTREF defaultargs_compiled.ref
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(runtemplateAutodict
                  MACRO runtemplateAutodict.C
                  OUTREF templateAutodict.ref
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(runoperators
                  MACRO runoperators.C
                  OUTREF operators.ref
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(runalgebra
                  MACRO runalgebra.C+
                  OUTREF algebra.ref
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(exectemplatetemplateTest
                  MACRO exectemplatetemplateTest.cxx+
                  OUTREF exectemplatetemplateTest.ref
                  LABELS roottest regression cling)

ROOTTEST_ADD_TEST(assertTmpltDefArgCtor
                  MACRO assertTmpltDefArgCtor.C
                  LABELS roottest regression cling)

ROOTTEST_ADD_TESTDIRS()
