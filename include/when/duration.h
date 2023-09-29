//
//  duration.h
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 29.09.2023.
//  Copyright © 2023 Dmitrii Torkhov. All rights reserved.
//

#pragma once

#include <chrono>

namespace oo {

    class duration {
    public:

        duration();

    public:

        [[nodiscard]] int64_t get() const;

    private:

        std::chrono::high_resolution_clock::time_point m_start;
    };

}
