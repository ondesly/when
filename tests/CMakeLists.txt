#
#  CMakeLists.txt
#  when
#
#  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
#  Copyright © 2021-2023 Dmitrii Torkhov. All rights reserved.
#

project(tests)

#

function(add name)
    add_executable(${name} ${name}.cpp)

    target_link_libraries(${name} when)

    set_target_properties(${name} PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED YES CXX_EXTENSIONS NO)

    add_test(NAME ${name} COMMAND ${name})
endfunction()

#

add("test_iteration")
add("test_distance")
add("test_duration")
add("test_now")
add("test_stamp")
add("test_day_arithmetic")
