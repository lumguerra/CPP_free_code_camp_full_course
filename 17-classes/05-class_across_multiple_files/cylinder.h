#ifndef CYLINDER.H 
#define CYLINDER.H 
#include "consts.h" 

class Cylinder{

    private:

        double height{1};
        double radius{1};
    
    public:
        //constructors
        Cylinder () = default;
        Cylinder (double height_prm, double radius_prm){
            height = height_prm;
            radius = radius_prm;
        }

        //functions
        double volume(){
            double volume;
            volume = height * PI * height * radius;
            return volume;
        }

};

#endif