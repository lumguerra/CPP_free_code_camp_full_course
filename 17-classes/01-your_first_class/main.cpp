#include <iostream>

using namespace std;

const double PI {3.141592653589793238462643383279502884197};

class Cylinder{
    public :
        double volume(){
            return PI * radius * radius * height;
        }

    double height {1.2};
    double radius {3};
};

int main(){

    Cylinder cylinder;

    cout << "cylinder volume: " << cylinder.volume() << "\n";
    cout << "cylinder height: " << cylinder.height << "\n";
    cout << "cylinder radius: " << cylinder.radius << "\n";
    cout << "after changing object value" << "\n";

    cylinder.height = 3.4;
    cylinder.radius = 3.5;

    cout << "cylinder volume: " << cylinder.volume() << "\n";
    cout << "cylinder height: " << cylinder.height << "\n";
    cout << "cylinder radius: " << cylinder.radius << "\n";

    return 0;
}