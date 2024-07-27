//
//  test_iteration.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
//  Copyright © 2021-2024 Dmitrii Torkhov. All rights reserved.
//

#include <cassert>
#include <map>

#include <when/days.h>

int main() {
    const std::map<time_t, time_t> ref{
        {1612915200, 1613001599}, {1613001600, 1613087999}, {1613088000, 1613174399}, {1613174400, 1613260799}};

    constexpr auto begin = 1612952892;
    constexpr auto end = 1613210092;

    std::map<time_t, time_t> m;
    for (const auto &day : oo::days{begin, end}) {
        m.emplace(day.get_timestamp(oo::day::part::begin), day.get_timestamp(oo::day::part::end));
    }
    assert(ref == m);

    return 0;
}
