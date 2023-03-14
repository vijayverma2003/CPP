//
// Created by Vijay on 14/03/23.
//

#include "TextBox.h"
#include <string>

using namespace std;

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string& value) {
    this->value = value;
}

TextBox::TextBox(const string& val) : value{value} {}
