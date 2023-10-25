#include <iostream>
using namespace std;

void enter_bar(unsigned age)
{
    if (age < 18){
        cout << "You are too young to enter \n";
    } else {
        cout << "You are welcome to enter the bar\n";
    }
}

int bigger_num(int a, int b)
{
    if (a>b){
        return a;
    } else{
        return b;
    }
}

int lucky_number(){
    return 32;
}

int main ()
{
    int result {lucky_number()};
    cout << result;

    return 0;
}