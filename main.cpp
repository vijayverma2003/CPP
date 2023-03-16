#include <iostream>
#include "Length.h"
#include "Point.h"
#include "Array.h"


using namespace std;


int main() {
    Point pt1 {1, 2};
    Point pt2 {2, 3};

    Point newPoint = ++pt1;

    cout << newPoint << endl << pt1;

    Array array{10};



    return 0;
}

