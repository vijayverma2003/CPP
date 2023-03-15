//
// Created by Vijay on 14/03/23.
//

#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw() const {
    cout << "Drawing a rectangle..." << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() const {
    return width * height;
}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    if(width < 0)
        throw invalid_argument("width");
    this->width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    if(height < 0)
        throw invalid_argument("height");
    this->height = height;
}

Rectangle::Rectangle(int width, int height) {
    objectsCount++;
    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, const string &color) : Rectangle(width, height) {
    this->color = color;
}

Rectangle::~Rectangle() {
    cout << "Destructor Called";
}

int Rectangle::objectsCount = 0;

int Rectangle::getObjectsCount() {
    return objectsCount;
}


