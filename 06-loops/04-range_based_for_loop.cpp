#include <iostream>
using namespace std;

int main()
{
    int array[] {1,2,3,4,5,6,6,7,4432,7,8,9,7,32};
    size_t i {0};

    for ( int n : array){
        cout << "array[" << i << "]: " << n << "\n";
        ++i;
    }

    return 0;
}