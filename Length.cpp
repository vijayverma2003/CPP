//
// Created by Vijay on 16/03/23.
//

#include "Length.h"
#include <ostream>

Length::Length(int value) : value(value) {}

bool Length::operator==(const Length &other) const {
    return value == other.value;
}

bool Length::operator==(int other) const {
    return value == other;
}

strong_ordering Length::operator<=>(const Length &other) const {
    return value <=> other.value;
}

int Length::getValue() const {
    return value;
}

void Length::setValue(int value) {
    Length::value = value;
}

ostream& operator<< (ostream& stream, const Length& length) {
    return stream << length.getValue();
}

istream &operator>>(istream &stream, Length &length) {
    int value;
    stream >> value;
    length.setValue(value);
    return stream;
}

Length Length::operator+(const Length &other) const {
    return Length(value + other.value);
}

Length& Length::operator+=(const Length &other) {
    value += other.value;
    return *this;
}

Length& Length::operator++() {
    value++;
    return *this;
}

Length Length::operator++(int) {
    Length copy = *this;
    operator++();
    return copy;
}

Length::operator int() const {
    return value;
}
