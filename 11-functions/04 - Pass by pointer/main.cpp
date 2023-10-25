#include <iostream>
using namespace std;

void say_age(int *age)
{
    *age = ++*age;
    cout << "your age is: " << *age << " age variable adress: " << age << "\n";
}

int main()
{
    int age {48};
    cout << "age before function: " << age << " age before function adress: " << &age << "\n";
    say_age(&age);
    cout << "age after function: " << age << " age after function adress: " << &age << "\n";

    return 0;
}