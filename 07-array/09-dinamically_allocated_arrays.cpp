//initialize an array on the stack, another on the heap. Delete them ,  allocate it again with new values, teste the sizes, print them out with for range loop

#include <iostream>
using namespace std;

int main()
{   
    const size_t SIZE_STACK {10};
    int array_on_the_stack [SIZE_STACK] {1,2,3,4,5,6,7,8,9,10};
    size_t SIZE_HEAP {10};
    int *array_on_the_heap {new int [SIZE_HEAP] {11,12,13,14,15,16,17,18,19,20}};


    cout << "array on the stack:\n";
    for ( size_t n : array_on_the_stack){
        cout << "value: " << n << "\n";        
    }
    cout << "size of the array on the stack: " << size(array_on_the_stack);

    cout << "\narray on the heap:\n";
    for ( size_t i{}; i < SIZE_HEAP; ++i){
        cout << "value: " << array_on_the_heap[i] << "\n";
    }
    cout << "size of the array on the heap: " << SIZE_HEAP << "\n";

    delete [] array_on_the_heap;
    array_on_the_heap = nullptr;

    if(array_on_the_heap){
        cout << "array still on the heap \n";
    } else{
        cout << "no memory allocated for the array_on_the_heap\n";
    }    

    return 0;
}