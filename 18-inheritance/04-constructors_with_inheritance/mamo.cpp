#include "mamo.h"
#include "animal.h"
#include <iostream>
#include <string_view>

using namespace std;

ostream& operator<<(ostream& out, const Mamo& mamo){
    out << "Animal type: " << mamo.animal_type << "\n"
        << "Animal weight: " << mamo.animal_weight << "\n"
        << "Mamo paws quantity: " << mamo.number_of_paws << "\n";
}

Mamo::Mamo(){
    cout << "Default mamo constructor called\n";
}

Mamo::Mamo(string_view p_animal_type, int p_animal_weight, int p_number_of_paws)
    : Animal(p_animal_type, p_animal_weight), number_of_paws(p_number_of_paws){}