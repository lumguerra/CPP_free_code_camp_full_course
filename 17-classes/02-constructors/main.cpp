#include <iostream>

using namespace std;

const double PI {3.141592653589793238462643383279502884197};

class Cylinder{
    public :
        Cylinder(){
            height = 3.4;
            radius = 3.3;
        }

        Cylinder(double radius_param, double height_param){
            radius = radius_param;
            height = height_param;
        }

        double volume(){
            return PI * radius * radius * height;
        }

    private :
    
        double height;
        double radius;

};

int main(){

    Cylinder cylinder1(10, 4);

    cout << cylinder1.volume(); 

    return 0;
}