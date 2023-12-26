#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"


int main(){

    Shape shape1;
    Oval oval1;
    Circle circle1;

    Shape* shape_collection[]{&shape1, &oval1, &circle1};

    for( Shape* s_ptr : shape_collection){
        s_ptr->draw();
    }

    return 0;
}