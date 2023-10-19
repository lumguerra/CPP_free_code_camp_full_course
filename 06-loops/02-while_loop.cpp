#include <iostream>
using namespace std;

int main()
{
    const size_t COUNT{100};
    size_t i {0};

    while (i < COUNT){
        cout << "Hello!\n";
        i++;
    }

    cout << "Loop end";

    return 0;
}