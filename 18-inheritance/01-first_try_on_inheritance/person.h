#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string_view>

using namespace std;

class Person {
    friend ostream &operator<<(ostream &out, const Person &person);

public:
    Person();
    Person(const string &first_name_param, const string &last_name_param);
    ~Person();

    // getters
    string get_first_name() const {
        return first_name;
    }

    string get_last_name() const {
        return last_name;
    }
    // setters
    void set_first_name(string_view p_first_name){
        first_name = p_first_name;
    }

    void set_last_name(string_view p_last_name){
        last_name = p_last_name;
    }

private:
    string first_name{"mysterious"};
    string last_name{"Person"};
};

#endif