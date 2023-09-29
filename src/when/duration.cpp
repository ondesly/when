//
//  duration.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 29.09.2023.
//  Copyright © 2023 Dmitrii Torkhov. All rights reserved.
//

#include "when/duration.h"

oo::duration::duration() {
    m_start = std::chrono::high_resolution_clock::now();
}

int64_t oo::duration::get() const {
    const auto end = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::microseconds>(end - m_start).count();
}
