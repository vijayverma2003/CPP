//
// Created by Vijay on 14/03/23.
//

#ifndef C___RECTANGLE_H
#define C___RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight() const;
    void setHeight(int height);
private:
    int width;
    int height;
    string color;

};


#endif //C___RECTANGLE_H
