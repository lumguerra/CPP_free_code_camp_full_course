#include "rectangle.hpp"
#include "shape.hpp"
#include <iostream>

int main() {
    Shape* shape_rec = new Rectangle(10, 10, "rectangle1");
    double result = shape_rec->perimeter();

    std::cout << "Perimeter: " << result << std::endl;

    delete shape_rec;
    return 0;
}