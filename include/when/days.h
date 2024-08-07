//
//  days.h
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
//  Copyright © 2021-2024 Dmitrii Torkhov. All rights reserved.
//

#pragma once

#include <ctime>
#include <iterator>

#include "when/day.h"

namespace oo {

    class days {
    public:
        class iterator {
        public:
            using iterator_category = std::forward_iterator_tag;
            using value_type = oo::day;
            using difference_type = size_t;
            using pointer = oo::day *;
            using reference = const oo::day &;

        public:
            explicit iterator(const oo::day &day);

        public:
            reference operator*() const;

            iterator &operator++();

            bool operator==(const iterator &other) const;

            bool operator!=(const iterator &other) const;

        private:
            oo::day m_day;
        };

    public:
        days(time_t begin, time_t end);

    public:
        iterator begin() const;

        iterator end() const;

    private:
        time_t m_begin;
        time_t m_end;
    };

}