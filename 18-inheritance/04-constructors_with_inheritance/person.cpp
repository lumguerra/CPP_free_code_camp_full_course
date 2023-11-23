#include "person.h"
#include <iostream>
#include <string_view>

using namespace std;

Person::Person(){
    cout << "Default Person constructor called.\n";
}

Person::Person(string_view fullname, int age, string_view address)
    : m_full_name {fullname}, m_age {age},
        m_address {address}
{
}

void Person::do_something() const{
    cout << "Hello\n";
}


ostream &operator<<(ostream &out, const Person &person){
    out << "Person [Full name: " << person.get_full_name() << ", Age: " << person.get_age() << ", Adress: " << person.get_address() << "]" ;
    return out;
}

Person::~Person(){

}
