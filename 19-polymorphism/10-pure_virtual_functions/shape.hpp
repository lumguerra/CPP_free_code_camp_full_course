#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <iostream>
#include <string_view>
#include <string>


class Shape{

    protected:
        Shape();
        Shape(std::string_view description_param);

    public:
        virtual~Shape();

        virtual double perimeter() const = 0;
        virtual double surface() const = 0;
    
    private:
        std::string description; 

};

#endif