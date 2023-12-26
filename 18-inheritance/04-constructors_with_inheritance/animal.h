#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string_view>
#include <string>

using namespace std;

class Animal{

    friend ostream& operator<<(ostream& out, const Animal& animal);

    public:
        Animal();
        Animal(string_view p_animal_type, int p_animal_weight);

        string animal_type {"none"};

        string get_animal_type();


    protected:
        int animal_weight{0};

        int get_animal_weight();

};

#endif