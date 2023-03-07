#include <iostream>
#include <memory>

using namespace std;


int main() {
    unique_ptr<int> x(new int);
    auto y = make_unique<int>();
    auto numbers = make_unique<int[]>(5);

    return 0;
}
