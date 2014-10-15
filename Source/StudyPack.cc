// StudyPack - hello world!
//
//----------------------------------------------------------------------
// Copyright (c) 2012 by Ben Morgan <bmorgan.warwick@gmail.com>
// Copyright (c) 2012 by The University of Warwick
//
// Distributed under the OSI-approved BSD 3-Clause License (the "License");
// see the accompanying file "License.txt" for details.
//
// This software is distributed WITHOUT ANY WARRANTY; without even the
// implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the License for more information.
//----------------------------------------------------------------------

#include <iostream>

#include "StudyPackLib.h"

int main() {
  std::cout << "[StudyPack::Info] Hello World" << std::endl;
  std::cout << "[StudyPack::Info] StudyPack::hello() : "
            << StudyPack::hello()
            << std::endl;
  return 0;
}

