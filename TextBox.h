//
// Created by Vijay on 14/03/23.
//

#ifndef C___TEXTBOX_H
#define C___TEXTBOX_H

#include <string>
#include "Widget.h"

using namespace std;

class TextBox : public Widget {
public:
    ~TextBox();

    void draw() const override final;
    string getValue();
    void setValue(const string& value);
private:
    string value;
};


#endif //C___TEXTBOX_H
