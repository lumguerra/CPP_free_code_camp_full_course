#include <iostream>
using namespace std;

const double PI{3.141592653589793238462643383279502884197};

class Cylinder{

    public: 

        Cylinder() = default;

        Cylinder(double radius_pmt, double height_pmt){
            radius = radius_pmt;
            height = height_pmt;
        }

        double volume(){
            
            double volume{};
            volume = (PI * (radius * radius)) * height;
            
            return volume;
        }

    private:

        double radius{1};
        double height{1};

};

int main(){
    Cylinder cylinder(3.4, 3.5);

    cout << "volume: " << cylinder.volume();

    return 0;
    
}