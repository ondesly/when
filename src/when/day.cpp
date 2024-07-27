//
//  day.cpp
//  when
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 27.07.2024.
//  Copyright © 2024 Dmitrii Torkhov. All rights reserved.
//

#include "when/day.h"

oo::day::day() : day(time(nullptr)) {}

oo::day::day(const time_t t) {
    gmtime_r(&t, &m_tm);
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

time_t oo::day::get_timestamp(const part part) const {
    auto tm = m_tm;
    switch (part) {
    case part::begin:
        return timegm(&tm);
    case part::end:
        tm.tm_mday += 1;
        return timegm(&tm) - 1;
    default:
        return 0;
    }
}
