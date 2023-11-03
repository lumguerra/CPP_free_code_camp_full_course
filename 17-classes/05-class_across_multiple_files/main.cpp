#include <iostream>
#include "cylinder.h"

using namespace std;

int main(){

    Cylinder cylinder1(3.5, 4);

    cout << "volume: " << cylinder1.volume() << "\n";

    return 0;

}