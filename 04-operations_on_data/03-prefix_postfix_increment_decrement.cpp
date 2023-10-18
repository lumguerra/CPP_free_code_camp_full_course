#include <iostream>
using namespace std;

int main()
{
    //increment and decrement
    int var {5};
    cout << "var value: " << var << '\n';
    var = var + 1;
    cout << "var value with increment: " << var << '\n';
    var = 5;
    var = var - 1;
    cout << "var value with decrement: " << var << '\n';

    // postfix increment
    var = 5;
    cout << "var value: " << var << '\n';
    cout << "var value with postfix increment: " << var++ << '\n';
    cout << "var value with postfix increment after a new line: " << var++ << '\n';
    
    // prefix increment
    var = 5;
    cout << "var value: " << var << '\n';
    cout << "var value with prefix increment: " << ++var << '\n';
    cout << "var value with prefix increment after a new line: " << ++var << '\n';

    return 0;
}