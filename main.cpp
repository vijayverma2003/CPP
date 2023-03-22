#include <iostream>
#include "Rectangle.h"
#include "Array.h"
#include "Pair.h"


using namespace std;


int main() {
    Array<Pair<string, int>> pairs {10};
    Pair<string, int> pair {"a", 10};
    pairs[0] = pair;

    cout << pairs[0];

    return 0;
}

