#include <iostream>
using namespace std;

int main(){

    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};

    cout << character1 << "\n";
    cout << character2 << "\n";
    cout << character3 << "\n";
    cout << character4 << "\n";
    cout << character5 << "\n\n";

    char value {65};

    cout << value << "\n";
    cout << static_cast<int>(value);

    return 0;
}