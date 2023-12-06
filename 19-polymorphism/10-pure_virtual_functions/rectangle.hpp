#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
#include "shape.hpp"
#include <string_view>

class Rectangle : public Shape{

    public:
        Rectangle();
        ~Rectangle();
        Rectangle(double width_param, double height_param, std::string_view description_param);

        double width{0};
        double height{0};

        double perimeter() const override{
            return (2*width + 2*height);
        }
        double surface() const override{
            return (width * height);
        }
};

#endif