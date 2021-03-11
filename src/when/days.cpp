//
//  days.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 09.02.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#include "when/days.h"

// -- day --

oo::day::day(time_t t) {
    m_tm = *std::localtime(&t);
    m_tm.tm_hour = m_tm.tm_min = m_tm.tm_sec = 0;
}

oo::day &oo::day::operator++() {
    ++m_tm.tm_mday;

    return *this;
}

bool oo::day::operator==(const oo::day &other) const {
    auto tm1 = m_tm;
    auto tm2 = other.m_tm;

    return std::mktime(&tm1) == std::mktime(&tm2);
}

time_t oo::day::get_begin() const {
    auto tm = m_tm;
    return std::mktime(&tm);
}

time_t oo::day::get_end() const {
    auto tm = m_tm;
    tm.tm_mday += 1;
    return std::mktime(&tm) - 1;
}

// -- days --

oo::days::days(time_t begin, time_t end) : m_begin(begin), m_end(end) {}

oo::days::iterator oo::days::begin() const {
    return iterator{day{m_begin}};
}

oo::days::iterator oo::days::end() const {
    auto tm = std::localtime(&m_end);
    tm->tm_mday += 1;

    return iterator{day{std::mktime(tm)}};
}

// -- iterator --

oo::days::iterator::iterator(const oo::day &day) : m_day(day) {}

oo::days::iterator::reference oo::days::iterator::operator*() const {
    return m_day;
}

oo::days::iterator &oo::days::iterator::operator++() {
    ++m_day;

    return *this;
}

bool oo::days::iterator::operator==(const oo::days::iterator &other) const {
    return m_day == other.m_day;
}

bool oo::days::iterator::operator!=(const oo::days::iterator &other) const {
    return !(operator==(other));
}
