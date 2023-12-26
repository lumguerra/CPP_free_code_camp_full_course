#include "parent.h"
#include <iostream>

using namespace std;

Parent::Parent()
{
    cout << " Parent default constructor called\n";
}

Parent::Parent(string m_name_param, vector<int> m_numbers_param )
    :   m_name{m_name_param},
        m_numbers{m_numbers_param}
{
    cout << " Parent custom constructor called\n";
};

void say_hello()
{
    cout << "Parent says HELLO!\n";
}


