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

target_include_directories(when
        PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/../include>)

set_target_properties(when PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED YES CXX_EXTENSIONS NO)
