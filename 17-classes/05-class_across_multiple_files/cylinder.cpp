#include "cylinder.h"

Cylinder::Cylinder(double height_prm, double radius_prm)
{
    height = height_prm;
    radius = radius_prm;
}

double Cylinder::volume()
{
    double volume;
    volume = height * PI * height * radius;
    return volume;
}

void Cylinder::setter_radius(double radius_prm)
{
    radius = radius_prm;
}

void Cylinder::setter_height(double height_prm)
{
    height = height_prm;
}

double Cylinder::get_radius()
{
    return radius;
}

double Cylinder::get_height()
{
    return height;
}