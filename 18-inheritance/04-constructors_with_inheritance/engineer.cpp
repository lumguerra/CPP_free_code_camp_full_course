#include "person.h"
#include "engineer.h"
#include <iostream>
#include <string_view>

using namespace std;

Engineer::Engineer()
{
    std::cout << "Default constructor for Engineer called...\n";
}

Engineer::Engineer(string_view fullname, int age, const string_view address, int contract_count_param) : 
    Person(fullname, age, address), contract_count (contract_count_param)
{
}

std::ostream& operator<<(std::ostream& out , const Engineer& operand){
     out << "Engineer [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() << 
                    ",address : " << operand.get_address() <<
                    ",contract_count : " << operand.contract_count << "]";
    return out;   
}


Engineer::~Engineer()
{
}