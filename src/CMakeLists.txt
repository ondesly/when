#
#  CMakeLists.txt
#  when
#
#  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
#  Copyright © 2021-2024 Dmitrii Torkhov. All rights reserved.
#

add_library(when STATIC
        when/day.cpp
        when/days.cpp
        when/duration.cpp
        when/now.cpp
        when/stamp.cpp)

#

set(INCLUDE_DIR ${CMAKE_CURRENT_LIST_DIR}/../include)

set(PUBLIC_HEADERS
        ${INCLUDE_DIR}/when/days.h
        ${INCLUDE_DIR}/when/duration.h
        ${INCLUDE_DIR}/when/now.h
        ${INCLUDE_DIR}/when/stamp.h)

set_target_properties(when PROPERTIES PUBLIC_HEADER "${PUBLIC_HEADERS}")

target_include_directories(when PUBLIC $<BUILD_INTERFACE:${INCLUDE_DIR}> $<INSTALL_INTERFACE:include>)

set_target_properties(when PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED YES CXX_EXTENSIONS NO)