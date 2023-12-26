#include <iostream>
using namespace std;

class Dog{
    public:
        Dog() = default;

        size_t legs;
        size_t tails;
        int eyes;
        int *p_int;
};

int main(){

    string str {"slkdjflskdjflksdjflksdjflksjdf"};

    Dog dog1;
    cout << "sizeof(dog1):" << sizeof(dog1) << "\n"; 
    cout << "sizeof(size_t):" << sizeof(size_t) << "\n"; 
    cout << "sizeof(int):" << sizeof(int) << "\n"; 
    cout << "sizeof(string):" << sizeof(string) << "\n";
    cout << "sizeof(str):" << sizeof(str) << "\n";
    cout << "sizeof(p_int):" << sizeof(dog1.p_int) << "\n";

    return 0;
}