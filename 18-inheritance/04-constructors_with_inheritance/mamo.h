#ifndef MAMO_H
#define MAMO_H

#include <iostream>
#include <string_view>
#include <string>
#include "animal.h"

using namespace std;

class Mamo : Animal{

    friend ostream& operator<<(ostream& out, const Mamo& mamo);

    public:
        Mamo();
        Mamo(string_view p_animal_type, int p_animal_weight, int p_number_of_paws);

        int number_of_paws{2};

};

#endif
