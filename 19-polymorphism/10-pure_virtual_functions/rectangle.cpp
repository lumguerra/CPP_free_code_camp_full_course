#include "rectangle.hpp"

Rectangle::Rectangle(){};
Rectangle::~Rectangle(){};
Rectangle::Rectangle(double width_param, double height_param, std::string_view description_param) 
    : Shape(description_param), 
        width(width_param), 
        height(height_param){};