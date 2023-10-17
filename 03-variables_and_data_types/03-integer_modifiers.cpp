#include <iostream>

using namespace std;

int main()
{

    short short_var {-97};
    short int short_int {897};
    short signed int short_signed_int {-98};
    short unsigned int short_unsigned_int {9854};

    cout << "\n" << "short: " << short_var << " size: " << sizeof(short_var) << "\n";
    cout << "short int: " << short_int << " size: " << sizeof(short_int) << "\n";
    cout << "short signed int: " << short_signed_int << " size: " << sizeof(short_signed_int) << "\n";
    cout << "short unsigned int: " << short_unsigned_int << " size: " << sizeof(short_unsigned_int) << "\n\n";

    int int_var {89};
    signed int signed_int_var {-9834}; 
    unsigned int unsigned_int {989};

    std::cout << "\n" << "int: " << int_var << " size: " << sizeof(int_var) << "\n";
    std::cout << "signed int: " << signed_int_var << " size: " << sizeof(signed_int_var) << "\n";
    std::cout << "unsigned int: " << unsigned_int << " size: " << sizeof(unsigned_int) << "\n\n"; 

    long long_var {987908};
    long int long_int {9879879};
    long signed int long_signed_int {-8769689};
    long unsigned int long_unsigned_int {890790};

    std::cout << "\n" << "long: " << long_var << " size: " << sizeof(long_var) << "\n";
    std::cout << "long int: " << long_int << " size: " << sizeof(long_int) << "\n";
    std::cout << "long signed int: " << long_signed_int << " size: " << sizeof(long_signed_int) << "\n";
    std::cout << "long unsigned int: " << long_unsigned_int << " size: " << sizeof(long_unsigned_int) << "\n\n";

    long long long_long_var {-9879};
    long long int long_long_int_var {898907};
    long long signed int long_long_signed_int_var {-238957};
    long long unsigned int long_long_unsigned_int_var {9568};

    std::cout << "\n" << "long long: " << long_long_var << " size: " << sizeof(long_long_var) << "\n";
    std::cout << "long long int: " << long_long_int_var << " size: " << sizeof(long_long_int_var) << "\n";
    std::cout << "long long signed int: " << long_long_signed_int_var << " size: " << sizeof(long_long_signed_int_var) << "\n";
    std::cout << "long long unsigned int: " << long_long_unsigned_int_var << " size: " << sizeof(long_long_unsigned_int_var) << "\n\n";

    return 0;
}