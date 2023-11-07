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
        Cylinder (double height_prm, double radius_prm);
        //functions
        double volume();
        void setter_radius(double radius_prm);
        void setter_height(double height_prm);
        double get_radius();
        double get_height();

};

#endif