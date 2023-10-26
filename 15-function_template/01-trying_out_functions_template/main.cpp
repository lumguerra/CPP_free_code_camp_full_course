#include <iostream>
using namespace std;
template <typename T>

T func(T a, T b){
    return a + b;
}

int main(){
    
    int a{43};
    int b{45};
    int c = func(a,b);

    cout << c;

    return 0;
}