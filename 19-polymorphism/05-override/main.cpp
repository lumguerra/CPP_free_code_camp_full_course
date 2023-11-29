#include <iostream>
#include <vector>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

using namespace std;

int main(){

    Oval oval1(44, 5.9, "oval1"), oval2(44, 5.9, "oval2") ,oval3(6.6, 5, "oval3");
    Circle circle1( 5.5, "circle1"), circle2( 2, "circle2"), circle3( 7.8, "circle3");

    vector<Shape*> v_shape{&oval1, &oval2, &oval3, &circle1, &circle2, &circle3};

    for( Shape* s : v_shape){
        s->draw();
    }

    return 0;
}