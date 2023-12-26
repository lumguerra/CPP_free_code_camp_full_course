#ifndef CHILD_H
#define CHILD_H
#include <string>
#include <vector>
#include "parent.h"

using namespace std;

class Child : protected Parent
{
    public:
        Child();
        Child(string m_name_param, vector<int> m_numbers_param, string m_pickup_line_param);
        
        void say_hello();

    private:
        string m_pickup_line{"I dont know what to do"};
};

#endif