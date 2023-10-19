#include <iostream>
using namespace std;

int main(){

    int salary[10] {};
    const size_t COUNT {10};

    for( size_t i{0}; i < COUNT; ++i ){
        cout << "salary[" << i + 1 << "]: " << i*10 << "\n";
    } 

    return 0;
}