#include <iostream>
using namespace std;

int main()
{
    int var {90};
    int *p_int {};

    p_int = &var;
    cout << p_int << "\n";

    var = 43;
    p_int = &var;

    cout << p_int;

    return 0;
}