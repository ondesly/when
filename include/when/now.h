//
//  now.h
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 11.03.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#pragma once

#include <cstdint>

namespace oo {

    class now {
    public:

        operator uint32_t() const;

        operator uint64_t() const;

    };

}