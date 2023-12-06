#include "shape.hpp"

Shape::Shape(){};\
Shape::~Shape(){};
Shape::Shape(std::string_view description_param) : description(description_param){};