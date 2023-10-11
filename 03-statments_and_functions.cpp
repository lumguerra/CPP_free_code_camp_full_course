#include <iostream>

using namespace std;

int sumNumbers(int num1 , int num2){
    int sum = num1 + num2;
    return sum;
}

int multiplyNumbers(int num1, int num2){
    int multiply = num1 * num2;
    return multiply;
}

int main(){
    int num1 = 43;
    int num2 = 32;    
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sumNumbers(num1, num2) << "\n";
    cout << "The multiplication of " << num1 << " and " << num2 << " is " << multiplyNumbers(num1, num2) << "\n";
    
    return 0;
}