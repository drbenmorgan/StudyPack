# - Build and install StudyPack binaries
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

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(StudyPackLib SHARED StudyPackLib.h StudyPackLib.cc)
set_target_properties(StudyPackLib
  PROPERTIES
    MACOSX_RPATH ON
  )

add_executable(StudyPack StudyPack.cc)
target_link_libraries(StudyPack StudyPackLib)

file(RELATIVE_PATH EXE_TO_LIB_PATH ${CMAKE_INSTALL_FULL_BINDIR} ${CMAKE_INSTALL_FULL_LIBDIR})
if(APPLE)
  set(STUDYPACK_RPATH "@executable_path/${EXE_TO_LIB_PATH}")
endif()

set_target_properties(StudyPack
  PROPERTIES
    INSTALL_RPATH ${STUDYPACK_RPATH}
  )

install(TARGETS StudyPack StudyPackLib
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  )

