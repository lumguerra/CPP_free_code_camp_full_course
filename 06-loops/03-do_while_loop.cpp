#include <iostream>
using namespace std;

int main()
{
    const size_t COUNT {10};
    size_t i {0};

    do{
        cout << "hello\n";
    } while ( i < COUNT );

    cout << "finish"; 
    
    return 0;
}