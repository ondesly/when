//
//  test_iteration.cpp
//  days
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#include <unordered_map>

#include <days/days.h>

int main() {
    const std::unordered_map<time_t, time_t> ref{{1612904400, 1612990799},
                                                 {1612990800, 1613077199},
                                                 {1613077200, 1613163599},
                                                 {1613163600, 1613249999}};

    const auto begin = 1612952892;
    const auto end = 1613210092;

    std::unordered_map<time_t, time_t> m;
    for (const auto &day : oo::days{begin, end}) {
        m.emplace(day.get_begin(), day.get_end());
    }

    return ref == m ? 0 : 1;
}