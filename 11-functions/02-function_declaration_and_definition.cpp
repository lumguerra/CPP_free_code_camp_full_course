#include <iostream>
using namespace std;

int max (int a, int b);
int min (int a, int b);
int add_and_mult (int a, int b);

int main()
{
    int a {5};
    int b {6};

    cout << "max is: " << max(a, b) << "\n";
    cout << "min is: " << min(a, b) << "\n";
    cout << "add and multiply: " << add_and_mult(a, b);

    return 0;
}

int max (int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min (int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int add_and_mult (int a, int b)
{
    return ((++a) * (++b));
}