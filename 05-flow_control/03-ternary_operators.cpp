#include <iostream>
using namespace std;

int main ()
{
    int a {15};
    int b {6};

    int max = (a > b) ? a : b;

    cout << "The max number is " << max;

    return 0;
}