#include <iostream>
using namespace std;

int main()
{
    int array[] {20,3,54};
    int array_size = sizeof(array)/sizeof(array[0]);
    int array_size_cpp17 = size(array);

    for( size_t i{0}; i < array_size_cpp17; ++i ){
        cout << "array[" << i << "]" << array[i] << "\n";
    }

    return 0;
}