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

    ~Rectangle();

    void draw() const;
    int getArea() const;
    int getWidth() const;
    int getHeight() const;

    void setWidth(int width);
    void setHeight(int height);

    static int getObjectsCount();
private:
    int width;
    int height;
    string color;

    static int objectsCount;
};


#endif //C___RECTANGLE_H
