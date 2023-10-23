#include <iostream>
using namespace std;

int main()
{
    int *ptr {new int{89}};

    if(ptr){
        cout << "valid ptr\n";
    } else {
        cout << "null_ptr\n";
    }

    return 0;
}