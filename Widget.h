//
// Created by Vijay on 18/03/23.
//

#ifndef C___WIDGET_H
#define C___WIDGET_H


class Widget {
public:
    ~Widget();

    virtual void draw() const;
    void enable();
    void disable();
    bool isEnabled();
private:
    bool enabled;
};


#endif //C___WIDGET_H
