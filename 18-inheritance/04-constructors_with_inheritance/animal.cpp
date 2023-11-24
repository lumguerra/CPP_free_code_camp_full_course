#include "animal.h"
#include <iostream>
#include <string_view>

using namespace std;

ostream& operator<<(ostream& out, const Animal& animal){
    out << "Animal type: " << animal.animal_type << "\n"
        << "Animal weight: " << animal.animal_weight << "\n";
}

Animal::Animal(){
    cout << "default constructor called\n";
}

Animal::Animal(string_view p_animal_type, int p_animal_weight) 
    : animal_type{p_animal_type}, animal_weight{p_animal_weight}{};

