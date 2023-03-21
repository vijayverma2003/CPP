//
// Created by Vijay on 21/03/23.
//

#include "Shape.h"
#include <iostream>

using namespace std;

const string &Shape::getBackground() const {
    return background;
}

void Shape::setBackground(const string &background) {
    Shape::background = background;
}

