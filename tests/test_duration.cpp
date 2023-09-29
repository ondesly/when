//
//  test_duration.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 29.09.2023.
//  Copyright © 2023 Dmitrii Torkhov. All rights reserved.
//

#include <cassert>
#include <numeric>
#include <vector>

#include <when/duration.h>

int main() {
    oo::duration iota_duration;

    std::vector<int> v(1024 * 1024);
    std::iota(v.begin(), v.end(), 0);

    const auto duration = iota_duration.get();
    assert(duration > 0);

    return 0;
}
