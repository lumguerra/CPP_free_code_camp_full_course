#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 {"Hello World"};
    string str2 {"Hello Lucas",6};
    string str3 {7, 'L'};
    string str4 {str1};

    cout << "str 1: " << str1 << "\n";
    cout << "str 2: " << str2 << "\n";
    cout << "str 3: " << str3 << "\n";
    cout << "str 4: " << str4 << "\n";

    return 0;
}