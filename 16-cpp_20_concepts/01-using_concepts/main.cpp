#include <iostream>
#include <concepts>
using namespace std;

/* template <typename T>
requires integral<T>
T add (T a , T b)
{
    return a + b;
} */

auto add (integral auto a, integral auto b){
    return a + b;
}

int main(){
    
    char a_0 {10};
    char a_1 {20};
    int b_0 {30};
    int b_1 {40};
    double c_0 {5.6};
    double c_1 {4.4};

    cout<< "a: " << static_cast<int>(add(a_0 , a_1)) << "\n";
    cout<< "b: " << add(b_0 , b_1) << "\n";
    // cout<< "c: " << add(c_0 , c_1) << "\n";

    return 0;
    
}