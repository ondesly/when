//
//  test_distance.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 10.02.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#include <when/days.h>

int main() {
    const size_t ref = 4;

    const auto begin = 1612952892;
    const auto end = 1613210092;

    const oo::days days{begin, end};
    const auto distance = std::distance(days.begin(), days.end());

    return ref == distance ? 0 : 1;
}