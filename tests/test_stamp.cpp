//
//  test_stamp.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 11.03.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#include <memory>
#include <numeric>
#include <vector>

#include <when/stamp.h>

int main() {
    auto stamp = std::make_shared<oo::stamp>("create");

    std::vector<int> v(1024 * 1024);

    stamp = std::make_shared<oo::stamp>("fill");

    std::iota(v.begin(), v.end(), 0);

    stamp = nullptr;

    return 0;
}