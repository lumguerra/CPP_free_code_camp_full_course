#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_circle(const Circle& circle){
    circle.draw();
}

void draw_oval(const Oval& oval){
    oval.draw();
}
// More functions as you deal with more shape types. 30 ? 70? 100? It's messy.



int main(){

   
    return 0;
}