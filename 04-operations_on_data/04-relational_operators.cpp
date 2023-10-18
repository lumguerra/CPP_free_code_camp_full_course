#include <iostream>
using namespace std;

int main(){

    int num1 {45};
    int num2 {60};

    cout << boolalpha;
    cout << "num1 < num2? " << (num1 < num2) << '\n';
    cout << "num1 < num2? " << (num1 < num2) << '\n';
    cout << "num1 == num2? " << (num1 == num2) << '\n';
    cout << "num1 != num2? " << (num1 != num2);

    return 0;
}