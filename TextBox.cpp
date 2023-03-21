//
// Created by Vijay on 14/03/23.
//

#include "TextBox.h"
#include <iostream>

using namespace std;

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string& value) {
    this->value = value;
}

TextBox::~TextBox() {
    cout << "Textbox Destructed" << endl;
}

void TextBox::draw() const {
    cout << "Drawing a textbox" << endl;
}
