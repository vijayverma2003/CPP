//
// Created by Vijay on 15/03/23.
//

#ifndef C___SMARTPOINTER_H
#define C___SMARTPOINTER_H


class SmartPointer {
public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer();
private:
    int* ptr;
};


#endif //C___SMARTPOINTER_H
