#include <iostream>
using namespace std;

int main(){
    
    int c{8};

    auto func = [&c](){
        cout << "inner-c value= " << c * 100 << " inner-c&: " << &c << "\n";
    };

    for( size_t i{}; i < 5; ++i ){
        cout << "outter-c value= " << c + i << " outter-c&: " << &c << "\n";
        func();
    }

    return 0;
}