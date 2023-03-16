//
// Created by Vijay on 16/03/23.
//

#ifndef C___ARRAY_H
#define C___ARRAY_H

#include <cstddef>

class Array {
public:
    explicit Array(size_t size);
    ~Array();
    int& operator[](size_t index);
private:
    int* values;
    size_t size;
};


#endif //C___ARRAY_H
