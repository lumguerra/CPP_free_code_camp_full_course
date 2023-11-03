#include <iostream>

using namespace std;

const double PI{3.141592653589793238462643383279502884197};

class Cylinder{

    public:

        Cylinder() = default;

        Cylinder(double radius_prm, double height_prm){
            radius = radius_prm;
            height = height_prm;
        }

        double volume(){
            double volume{};
            volume = radius * PI * radius * height;
            return volume;
        }

        void setter_radius(double radius_prm){
            radius = radius_prm;
        }

        void setter_height(double height_prm){
            height = height_prm;
        }

        double get_radius(){
            return radius;
        }

        double get_height(){
            return height;
        }

    private:

        double radius{};
        double height{};

};



int main(){

    Cylinder cylinder1(3,5);

    cout << "volume: " << cylinder1.volume() << "\n";
    cylinder1.setter_height(4);
    cylinder1.setter_radius(6.8);
    cout << "volume: " << cylinder1.volume() << "\n";


    return 0;

}