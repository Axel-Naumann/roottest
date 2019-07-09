# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.


if(OPENGL_gl_LIBRARY AND ROOTTEST_OS_ID MATCHES Scientific|CentOS|Ubuntu|Fedora)
  set(ROOTTEST_ENV_EXTRA LD_PRELOAD=${OPENGL_gl_LIBRARY})
endif()

foreach( t LoadAllLibs LoadAllLibsAZ LoadAllLibsZA)
  ROOTTEST_ADD_TEST(${t} MACRO assert${t}.C FAILREGEX "Error in|rc = -1")
endforeach()
