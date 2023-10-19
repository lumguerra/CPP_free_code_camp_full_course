#include <iostream>
using namespace std;

int main(){

    int salary[10] {};
    const size_t COUNT {10};

    //for loop reading array times 10
    for( size_t i{0}; i < COUNT; ++i ){
        cout << "salary[" << i << "]: " << i*10 << "\n";
    }
    cout << "------------------------------------\n";

    //for range loop to sum elements in a array
       
    double notes[] {5.6,4.0,23.4,6.6};
    double sum {};

    for ( double n : notes ){
        sum += n;
    }
    cout << "the sum of the notes is: " << sum << "\n";

    return 0;
}