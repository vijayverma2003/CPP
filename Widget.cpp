//
// Created by Vijay on 18/03/23.
//

#include "Widget.h"
#include <iostream>

using namespace std;

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() {
    return enabled;
}

Widget::~Widget() {
    cout << "Widget Destructed" << endl;
}

void Widget::draw() const {
    cout << "Drawing a widget" << endl;
}


