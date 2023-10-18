#include <iostream>
using namespace std;

int main()
{
    short int num1 {4};
    short int num2 {5};
    char char1 {6};
    char char2 {7};
    auto result1 = num1 + num2;
    auto result2= char1 + char2;

    cout << "size of num1: " << sizeof(num1) << "\n";
    cout << "size of num2: " << sizeof(num2) << "\n";
    cout << "result1: " << sizeof(result1) << "\n";
    cout << "size of char1: " << sizeof(char1) << "\n";
    cout << "size of char2: " << sizeof(char2) << "\n";
    cout << "result2: " << sizeof(result2) << "\n";

    return 0;
}