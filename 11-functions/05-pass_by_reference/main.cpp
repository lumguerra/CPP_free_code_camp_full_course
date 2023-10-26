#include <iostream>
using namespace std;

void new_age (int &age);

int main()
{
    int idade {28};

    cout << "age value before function: " << idade << "\n";
    cout << "age adress before function: " << &idade << "\n";
    new_age(idade);
    cout << "age value after function: " << idade << "\n";
    cout << "age adress after function: " << &idade << "\n";    

    return 0;
}

void new_age (int &age)
{
    cout << "your new age is " << age++ << "\n";
    cout << "age value in function: " << age << "\n";
    cout << "age adress in function: " << &age << "\n";
}