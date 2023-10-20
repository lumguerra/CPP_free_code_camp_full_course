#include <iostream>
using namespace std;

int main()
{
    int *ptr_1 { new int {83}};
    int *ptr_2 {ptr_1};

    cout << "ptr_1 : " << *ptr_1 << "-" << ptr_1 << "\n";
    cout << "ptr_2 : " << *ptr_2 << "-" << ptr_2 << "\n";

    delete ptr_1;
    ptr_1 = nullptr;

    if( ptr_1 != nullptr){
        cout << "ptr_1 is not null. It's adress is: " << ptr_1 << "\n";
    } else {
        cout << "Memory adress not found." << "\n";
    }

    return 0;
}