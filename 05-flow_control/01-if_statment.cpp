#include <iostream>
using namespace std;

int main()
{
    int num1 {6};
    int num2 {5};

    if(num1 > num2){
        cout << num1 << " is greater than " << num2;
    } else{
        cout << num1 << " is smaller than " << num2;
    };

    return 0;
}