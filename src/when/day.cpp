//
//  day.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 27.07.2024.
//  Copyright © 2024 Dmitrii Torkhov. All rights reserved.
//

#include "when/day.h"

oo::day::day(time_t t) {
    m_tm = *std::gmtime(&t);
    m_tm.tm_hour = m_tm.tm_min = m_tm.tm_sec = 0;
}

oo::day &oo::day::operator++() {
    ++m_tm.tm_mday;

    return *this;
}

oo::day &oo::day::operator--() {
    --m_tm.tm_mday;

    return *this;
}

oo::day &oo::day::operator+=(const int count) {
    m_tm.tm_mday += count;

    return *this;
}

oo::day &oo::day::operator-=(const int count) {
    m_tm.tm_mday -= count;

    return *this;
}

oo::day oo::operator+(oo::day day, const int count) {
    day += count;
    return day;
}

oo::day oo::operator-(oo::day day, const int count) {
    day -= count;
    return day;
}

bool oo::day::operator==(const oo::day &other) const {
    auto tm1 = m_tm;
    auto tm2 = other.m_tm;

    return timegm(&tm1) == timegm(&tm2);
}

time_t oo::day::get_begin() const {
    auto tm = m_tm;
    return timegm(&tm);
}

time_t oo::day::get_end() const {
    auto tm = m_tm;
    tm.tm_mday += 1;
    return timegm(&tm) - 1;
}