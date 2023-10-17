#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num_1 {0.98347259328f};
    double num_2 {0.98347259328};
    long double num_3 {0.98347259328L};
    double num_4 {0.3245e-11};

    cout << setprecision(20);
    cout << "\nnum_1: " << num_1 << "\n";
    cout << "num_2: " << num_2  << "\n";
    cout << "num_3: " << num_3  << "\n";
    cout << "num_4: " << num_4;

    return 0;
}