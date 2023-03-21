//
// Created by Vijay on 21/03/23.
//

#ifndef C___SHAPE_H
#define C___SHAPE_H

#include <string>

using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    const string& getBackground() const;
    void setBackground(const string& background);
private:
    string background;
};


#endif //C___SHAPE_H
