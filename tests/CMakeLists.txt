#
#  CMakeLists.txt
#  days
#
#  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
#  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
#

project(tests)

# TestIteration

add_executable(test_iteration test_iteration.cpp)

set_target_properties(test_iteration PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO)

target_link_libraries(test_iteration oo::days)

add_test(NAME TestIteration COMMAND test_iteration)

# TestDistance

add_executable(test_distance test_distance.cpp)

set_target_properties(test_distance PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO)

target_link_libraries(test_distance oo::days)

add_test(NAME TestDistance COMMAND test_distance)