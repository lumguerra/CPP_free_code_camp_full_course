#include <iostream>
using namespace std;

int main()
{
    int *ptr {nullptr};
    ptr = new int;
    *ptr = 77;
    cout << "ptr = " << *ptr << "\n";
    cout << "ptr adress= " << ptr << "\n";
    delete ptr;
    ptr  = nullptr;
    cout << "------another pointer------\n";

    int *ptr2 {new int (78)};
    cout << "ptr2 adress: " << ptr2 << "\n";
    cout << "ptr2 value: " << *ptr2 << "\n";
    ptr2 = new int(79);
    cout << "new ptr2 value: " << *ptr2 << "\n";

    return 0;
}