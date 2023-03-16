//
// Created by Vijay on 16/03/23.
//

#ifndef C___POINT_H
#define C___POINT_H


#include <ostream>

using namespace std;

class Point {
public:
    Point(int x, int y);

    bool operator==(const Point& other) const;
    Point operator+(const Point& other) const;
    Point operator+(int value) const;
    Point& operator++();
    Point operator++(int);

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);
private:
    int x;
    int y;
};


ostream& operator<<(ostream& stream, const Point& point);


#endif //C___POINT_H
