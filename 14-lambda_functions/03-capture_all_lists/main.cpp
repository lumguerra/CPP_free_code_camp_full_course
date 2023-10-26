#include <iostream>
using namespace std;

int main(){
    
    int a{4};
    int b{9};
    int c{4};

    auto func = [&](){
        c = a * b;
        cout << "c= " << c << "\n";
    };

    cout << a + b + c << "\n";
    func();
    cout << c << "\n";
    cout << a + b + c << "\n";

    return 0;
}