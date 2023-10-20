#include <iostream>

int main()
{
    int *ptr {new int{89}};

    if(ptr){
        std::cout << "valid ptr\n";
    } else {
        std::cout << "null_ptr\n";
    }

    return 0;
}