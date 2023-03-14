//
// Created by Vijay on 14/03/23.
//

#ifndef C___TEXTBOX_H
#define C___TEXTBOX_H

#include <string>

using namespace std;

class TextBox {
public:
    TextBox() = default;
    explicit TextBox(const string& value);
    string getValue();
    void setValue(const string& value);
private:
    string value;
};


#endif //C___TEXTBOX_H
