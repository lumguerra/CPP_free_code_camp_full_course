#include <iostream>
using namespace std;

int main ()
{
    bool a {true};
    bool b {false};
    bool c {true};

    cout << boolalpha;
    cout << "a && b = " << (a && b) << '\n';
    cout << "a && c = " << (a && c) << '\n';
    cout << "a && b && c = " << (a && b && c) << '\n';
    cout << "a || b = " << (a || b) << '\n';
    cout << "a = " << a << "!a = " << !a << '\n';
    cout << "(a && c) || !b = " << (a && c) || !b; 

    return 0;
}