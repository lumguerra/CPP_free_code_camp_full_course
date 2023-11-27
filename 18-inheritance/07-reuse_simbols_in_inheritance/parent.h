#ifndef PARENT_H
#define PARENT_H
#include <string>
#include <vector>

using namespace std;

class Parent
{
    public:

        Parent();
        Parent(string m_name_param, vector<int> m_numbers_param );

        void say_hello();

    protected:
        string m_name{"None"};
        vector<int> m_numbers{0};

};

#endif