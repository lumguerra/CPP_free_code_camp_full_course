#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string_view>

using namespace std;

class Person 
{
    friend ostream &operator<<(ostream &out, const Person &person);

public:
    Person() = default;
    Person(string_view fullname, int age, const string address);
    ~Person();

    // getters
    string get_full_name() const {
        return m_full_name;
    }

    int get_age() const {
        return m_age;
    }
    
    string get_adress() const {
        return m_address;
    }

public:
    string m_full_name{"None"};
protected:
    int m_age{0};
private:
    string m_address{"None"};
};

#endif