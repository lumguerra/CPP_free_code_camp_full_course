#include <iostream>
using namespace std;

int main(){

    auto func1 = [](double a, double b) -> int{
        return a + b;
    };

    auto func2 = [](double a, double b){
        return a + b;
    };

    cout << "func1: " << func1(4.5, 5.6) << "\n" << func2(4.5, 5.6);

    return 0;
}