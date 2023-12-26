#include <iostream>
#include "child.h"
#include "parent.h"

using namespace std;

Child::Child()
{
    cout << "Child default constructor called\n";
}

Child::Child(string m_name_param, vector<int> m_numbers_param, string m_pickup_line_param)
    : Parent(m_name_param, m_numbers_param), m_pickup_line(m_pickup_line_param)
{
    cout << " Child custom constructor called\n";
}

void say_hello()
{
    cout << "Child says HELLO!\n";
}