#include "Rectangle.h"
#include "TextBox.h"
#include <iostream>
#include <memory>

using namespace std;


int main() {
    auto* rectangle = new Rectangle(10, 20);
    rectangle->draw();
    delete rectangle;
    rectangle = nullptr;

    auto rect = make_unique<Rectangle>(10, 20);
    rect->draw();

    return 0;
}

