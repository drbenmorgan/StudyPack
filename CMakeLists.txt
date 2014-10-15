# - Top level build script for StudyPack
#
#-----------------------------------------------------------------------
# Copyright 2012 Ben Morgan <bmorgan.warwick@gmail.com>
# Copyright 2012 University of Warwick
#
# Distributed under the OSI-approved BSD 3-Clause License (the "License");
# see the accompanying file "License.txt" for details.
#
# This software is distributed WITHOUT ANY WARRANTY; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the License for more information.
#-----------------------------------------------------------------------
cmake_minimum_required(VERSION 2.8.6 FATAL_ERROR)
project(StudyPack)

#-----------------------------------------------------------------------
# Define the project version
#
set(StudyPack_VERSION_MAJOR 0)
set(StudyPack_VERSION_MINOR 1)
set(StudyPack_VERSION_PATCH 0)

#-----------------------------------------------------------------------
# Prepend this project's custom module path(s) to CMAKE_MODULE_PATH
#
set(CMAKE_MODULE_PATH
  ${PROJECT_SOURCE_DIR}/cmake
  ${CMAKE_MODULE_PATH})

# - Standard Install Paths for POSIX style
include(GNUInstallDirs)

#-----------------------------------------------------------------------
# Build subdirectories
#
add_subdirectory(Source)

#-----------------------------------------------------------------------
# Packaging
#
# - Description and Licensing
set(CPACK_RESOURCE_FILE_LICENSE ${PROJECT_SOURCE_DIR}/License.txt)

# - Only want a couple of the binary and source generators
if(UNIX)
  set(CPACK_GENERATOR "STGZ")
endif()

if(APPLE)
  list(APPEND CPACK_GENERATOR "PackageMaker")
endif()

set(CPACK_SOURCE_GENERATOR "ZIP;TBZ2")

# - Tools
if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  find_package(LSB REQUIRED)
endif()

include(CPack)

