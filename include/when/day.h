//
//  day.h
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 27.07.2024.
//  Copyright © 2024 Dmitrii Torkhov. All rights reserved.
//

#pragma once

#include <ctime>

namespace oo {

    class day {
    public:
        day();
        explicit day(time_t t);

    public:
        day &operator++();
        day &operator--();

        day &operator+=(int count);
        day &operator-=(int count);

        friend oo::day operator+(oo::day day, int count);
        friend oo::day operator-(oo::day day, int count);

        bool operator==(const day &other) const;

        time_t get_begin() const;

        time_t get_end() const;

    private:
        tm m_tm;
    };

}