#include "person.h"
#include <iostream>
#include <string_view>

using namespace std;

Person::Person(string_view fullname, int age, const string address)
    : m_full_name {fullname}, m_age {age},
        m_address {address}
{


};


ostream &operator<<(ostream &out, const Person &person){
    out << "Person [Full name: " << person.get_full_name() << ", Age: " << person.get_age() << ", Adress: " << person.get_adress() << "]" ;
    return out;
}

Person::~Person(){

}
