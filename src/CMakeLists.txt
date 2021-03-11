#
#  CMakeLists.txt
#  days
#
#  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
#  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
#

add_library(when STATIC
        when/days.cpp
        when/now.cpp)

target_include_directories(when PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/../include>
        $<INSTALL_INTERFACE:include>)

set_target_properties(when PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO)

#

set(PUBLIC_HEADERS
        ../include/when/days.h
        ../include/when/now.h)

install(TARGETS when
        EXPORT when-config
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        INCLUDES DESTINATION include)

install(FILES ${PUBLIC_HEADERS} DESTINATION include/when)

install(EXPORT when-config DESTINATION lib/cmake/when)