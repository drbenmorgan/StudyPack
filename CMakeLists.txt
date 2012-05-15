# - Tope level build script for StudyPack
#
#----------------------------------------------------------------------------
# Copyright 2012 Ben Morgan <bmorgan.warwick@gmail.com>
# Copyright 2012 University of Warwick
#
# Distributed under the OSI-approved 3-Clause License (the "License");
# see the accompanying file "License.txt" for details.
#
# This software is distributed WITHOUT ANY WARRANTY; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the License for more information.
#----------------------------------------------------------------------------

cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(StudyPack)

#----------------------------------------------------------------------------
# Prepend this project's custom module path(s) to CMAKE_MODULE_PATH
#
set(CMAKE_MODULE_PATH 
  ${PROJECT_SOURCE_DIR}/cmake
  ${CMAKE_MODULE_PATH})

#----------------------------------------------------------------------------
# Define the project version
#
set(StudyPack_VERSION_MAJOR 0)
set(StudyPack_VERSION_MINOR 1)
set(StudyPack_VERSION_PATCH 0)


#----------------------------------------------------------------------------
# Build subdirectories
#
add_subdirectory(Source)


#----------------------------------------------------------------------------
# Packaging
#
include(CPack)


