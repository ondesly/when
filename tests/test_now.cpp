//
//  test_now.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 11.03.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#include <chrono>

#include <when/now.h>

int main() {
    const auto ref_ms = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
    const auto ref_sec = std::chrono::duration_cast<std::chrono::seconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();

    const uint64_t ms = oo::now{};
    const uint32_t sec = oo::now{};

    return (ref_ms == ms && ref_sec == sec) ? 0 : 1;
}