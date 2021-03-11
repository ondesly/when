#
#  CMakeLists.txt
#  days
#
#  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
#  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
#

add_library(days STATIC
        days/days.cpp
        days/now.cpp)

add_library(oo::days ALIAS days)

target_include_directories(days PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/../include>
        $<INSTALL_INTERFACE:include>)

set_target_properties(days PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO)

#

set(PUBLIC_HEADERS
        ../include/days/days.h
        ../include/days/now.h)

install(TARGETS days
        EXPORT days-config
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        INCLUDES DESTINATION include)

install(FILES ${PUBLIC_HEADERS} DESTINATION include/days)

install(EXPORT days-config DESTINATION lib/cmake/days)