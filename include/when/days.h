//
//  days.h
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#pragma once

#include <ctime>
#include <iterator>

namespace oo {

    class day {
    public:

        explicit day(time_t t);

    public:

        day &operator++();

        bool operator==(const day &other) const;

        time_t get_begin() const;

        time_t get_end() const;

    private:

        tm m_tm;

    };

}

namespace oo {

    class days {
    public:

        class iterator : public std::iterator<std::forward_iterator_tag, oo::day, size_t,
                oo::day *, const oo::day &> {
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