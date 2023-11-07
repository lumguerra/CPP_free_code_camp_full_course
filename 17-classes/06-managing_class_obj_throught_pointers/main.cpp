#include <iostream>
#include "cylinder.h"

using namespace std;

int main(){

    Cylinder cylinder1(3.5, 4);
    Cylinder *p_cylinder1 = &cylinder1;
    Cylinder *p_cylinder2 = new Cylinder(54, 6.6);

    cout << "cylinder2 volume: " << p_cylinder2->volume() << "\n";
    cout << "cylinder2 radius: " << p_cylinder2->get_radius() << "\n";

    delete p_cylinder2;

    cout << "volume: " << p_cylinder1->volume() << "\n";

    return 0;

}