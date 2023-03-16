//
// Created by Vijay on 16/03/23.
//

#ifndef C___LENGTH_H
#define C___LENGTH_H

#include <ostream>
#include <istream>

using namespace std;

class Length {
public:
    explicit Length(int value);

    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    strong_ordering operator<=>(const Length& other) const;
    Length operator+ (const Length& other) const;
    Length& operator+= (const Length& other);
    Length& operator++();
    Length operator++(int);
    operator int() const;

    int getValue() const;
    void setValue(int value);
private:
    int value;
    friend ostream& operator<< (ostream& stream, const Length& length);
    friend istream& operator>> (istream& stream, Length& length);
};

ostream& operator<< (ostream& stream, const Length& length);
istream& operator>> (istream& stream, Length& length);


#endif //C___LENGTH_H
