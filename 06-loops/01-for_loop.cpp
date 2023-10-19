#include <iostream>
using namespace std;

const size_t COUNT {10};

int main()
{
    for ( size_t i{}; i < COUNT; ++i){
        cout << i + 1 << ": Hello!\n";
    }

    cout << "Size of size_t: " << sizeof(size_t) << "\n";
    cout << "Size of char: " << sizeof(char) << "\n";
    cout << "Size of short int: " << sizeof(short int) << "\n";
    cout << "Size of int: " << sizeof(int) << "\n";
    cout << "Size of long int: " << sizeof(long int) << "\n";
    cout << "Size of long long int: " << sizeof(long long int) << "\n";
    cout << "Size of long float: " << sizeof(float) << "\n";
    cout << "Size of long double: " << sizeof(double) << "\n";

    return 0;
}