#include "person.h"
using namespace std;

Person::Person(){

};

Person::Person(const string &first_name_param, const string &last_name_param) {
    first_name = first_name_param;
    last_name = last_name_param;
}

ostream &operator<<(ostream &out, const Person &person){
    out << "person [" << person.first_name << " " << person.last_name << "]";
    return out;
}

Person::~Person(){

}
