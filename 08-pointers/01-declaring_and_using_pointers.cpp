#include <iostream>

int main() {
    // Declare an integer variable
    int number = 42;

    // Declare a pointer to an integer and assign the address of 'number' to it
    int *pNumber = &number;

    // Display the value of 'number' using the pointer
    std::cout << "Value of 'number' using pointer: " << *pNumber << std::endl;

    // Modify the value of 'number' using the pointer
    *pNumber = 100;

    // Display the modified value of 'number'
    std::cout << "Modified value of 'number': " << number << std::endl;

    return 0;
}