//
//  test_day.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 27.07.2024.
//  Copyright © 2024 Dmitrii Torkhov. All rights reserved.
//

#include <cassert>
#include <when/days.h>

namespace {
    namespace constant {
        constexpr auto target_time = 1722072636;
        constexpr auto begin_time = 1722031200;
        constexpr auto forward_1_day_time = 1722117600;
        constexpr auto backward_1_day_time = 1721944800;
        constexpr auto forward_30_time = 1724623200;
        constexpr auto backward_30_time = 1719439200;
    } // namespace constant
} // namespace

int main() {
    oo::day begin{constant::target_time};
    assert(begin.get_begin() == constant::begin_time);

    const oo::day forward_30 = begin + 30;
    assert(forward_30.get_begin() == constant::forward_30_time);

    const oo::day backward_30 = begin - 30;
    assert(backward_30.get_begin() == constant::backward_30_time);

    ++begin;
    assert(begin.get_begin() == constant::forward_1_day_time);

    --begin;
    --begin;
    assert(begin.get_begin() == constant::backward_1_day_time);

    return 0;
}
