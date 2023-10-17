#include <iostream>
using namespace std;

int main (){

    int num_1 {5};
    int num_2 {12};

    int result = num_1 + num_2;
    cout << "sum: " << result << endl;
    result = num_1 - num_2;
    cout << "subtraction: " << result << endl;
    result = num_1 * num_2;
    cout << "multiplication: " << result << endl;
    result = num_2 / num_1;
    cout << "division: " << result << endl;
    result = num_2 % num_1;
    cout << "modulus: " << result << endl;

    return 0;
}