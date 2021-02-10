#
#  CMakeLists.txt
#  days
#
#  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
#  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
#

cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(days
        VERSION 1.0
        LANGUAGES CXX)

set(CMAKE_XCODE_ATTRIBUTE_EXCLUDED_ARCHS[sdk=iphonesimulator*] "arm64")

#########
# Build #
#########

add_subdirectory(src)
