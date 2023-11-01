#include <iostream>
#include <concepts>

using namespace std;

template < typename T >
concept TinyType = requires(T t){
    sizeof(T) <= 4;
};

template < typename T >
requires integral<T> && TinyType<T>
T add(T a, T b){
    return a + b;
}

int main(){

    int x {4}, y{5};

    cout << add(x , y);    

    return 0;
}