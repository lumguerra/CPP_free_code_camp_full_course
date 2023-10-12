#include <iostream>

using namespace std;

int main()
{
    int age = 0;

    cout << "What is your age?";
    cin >> age;
    cout << "Your age is: " << age << "\n";
    cerr << "error message: something is wrong \n";
    clog << "Log message: Something happend";

    return 0;
}