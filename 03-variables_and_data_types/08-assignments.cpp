#include <iostream>
using namespace std;

int main()
{
    int var1 {1};
    cout << "var1: " << var1 << endl;
    var1 = 2;
    cout << "var1: " << var1 << endl;
    
    cout << boolalpha;
    bool state {true};
    cout << "state: " << state << endl;
    state = false;
    cout << "state: " << state << endl;

    auto var3{123u};
    cout << "var3: " << var3 << endl;
    var3 = -4;
    cout << "var3: " << var3 << endl;

    return 0;
}