//
//  now.cpp
//  days
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 11.03.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#include <chrono>

#include "when/now.h"

oo::now::operator uint32_t() const {
    return std::chrono::duration_cast<std::chrono::seconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
}

oo::now::operator uint64_t() const {
    return std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
}