//
// Created by Vijay on 16/03/23.
//

#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

bool Point::operator==(const Point &other) const {
    return (x == other.x) && (y == other.y);
}

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    Point::x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    Point::y = y;
}

Point Point::operator+(const Point &other) const {
    return Point {x + other.x, y + other.y};
}

Point Point::operator+(int value) const {
    return Point {x + value, y + value};
}

Point &Point::operator++() {
    x++;
    y++;
    return *this;
}

Point Point::operator++(int) {
    Point copy = *this;
    x++;
    y++;
    return copy;
}

ostream& operator<<(ostream& stream, const Point& point) {
    return stream << "(" << point.getX() << ", " << point.getY() << ")";
}