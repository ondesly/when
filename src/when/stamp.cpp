//
//  stamp.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 11.03.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#include <iostream>
#include <utility>

#include "when/stamp.h"

oo::stamp::stamp(std::string name) : m_name(std::move(name)) {
    m_start = std::chrono::high_resolution_clock::now();
}

oo::stamp::~stamp() {
    const auto end = std::chrono::high_resolution_clock::now();
    std::cout << m_name << ": "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - m_start).count()
              << std::endl;
}