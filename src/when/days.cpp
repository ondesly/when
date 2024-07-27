//
//  days.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
//  Copyright © 2021-2024 Dmitrii Torkhov. All rights reserved.
//

#include "when/days.h"

oo::days::days(time_t begin, time_t end) : m_begin(begin), m_end(end) {}

oo::days::iterator oo::days::begin() const { return iterator{day{m_begin}}; }

oo::days::iterator oo::days::end() const {
    auto tm = std::localtime(&m_end);
    tm->tm_mday += 1;

    return iterator{day{std::mktime(tm)}};
}

// -- iterator --

oo::days::iterator::iterator(const oo::day &day) : m_day(day) {}

oo::days::iterator::reference oo::days::iterator::operator*() const { return m_day; }

oo::days::iterator &oo::days::iterator::operator++() {
    ++m_day;

    return *this;
}

bool oo::days::iterator::operator==(const oo::days::iterator &other) const { return m_day == other.m_day; }

bool oo::days::iterator::operator!=(const oo::days::iterator &other) const { return !(operator==(other)); }
