# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

#if (ROOT_python_FOUND AND NOT ROOT_CLASSIC_BUILD) # Do not run with classic build

#set(NBDIFFUTIL ${CMAKE_CURRENT_SOURCE_DIR}/nbdiff.py )

# List of notebook files
#set(NOTEBOOKS ${CMAKE_CURRENT_SOURCE_DIR}/EnableJsMVA.ipynb
#              ${CMAKE_CURRENT_SOURCE_DIR}/UserInterface.ipynb
#              ${CMAKE_CURRENT_SOURCE_DIR}/NewMethods.ipynb)

#find_python_module(IPython QUIET)

#if(PY_IPYTHON_FOUND)
#  # Test all notebooks available
#  foreach(NOTEBOOK ${NOTEBOOKS})
#    get_filename_component(NOTEBOOKBASE ${NOTEBOOK} NAME_WE)
#    ROOTTEST_ADD_TEST(${NOTEBOOKBASE}
#                      COMMAND ${PYTHON_EXECUTABLE} ${NBDIFFUTIL} ${NOTEBOOK}
#                      RUN_SERIAL)
#  endforeach()
#endif()

#endif()
