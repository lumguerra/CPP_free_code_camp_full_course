#include <iostream>
using namespace std;

int main()
{
    int var {3};
    const int &ref_var {var};

    cout << "var value: " << var << "\n";
    cout << "ref_var value: " << ref_var << "\n";

    var = 4;

    cout << "========================\n";
    cout << "var value: " << var << "\n";
    cout << "ref_var value: " << ref_var << "\n";

    int *p_var {&var};

    cout << "========================\n";
    cout << "var value: " << var << "\n";
    cout << "ref_var value: " << ref_var << "\n";
    cout << "p_var value: " << *p_var << "\n";

    *p_var = 5;

    cout << "========================\n";
    cout << "var value: " << var << "\n";
    cout << "ref_var value: " << ref_var << "\n";
    cout << "p_var value: " << *p_var << "\n";

    return 0;
}