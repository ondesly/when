//
//  stamp.h
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 11.03.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#pragma once

#include <chrono>
#include <string>

namespace oo {

    class stamp {
    public:

        explicit stamp(std::string name);

        ~stamp();

    private:

        std::string m_name;
        std::chrono::high_resolution_clock::time_point m_start;
    };

}