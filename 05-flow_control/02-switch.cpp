#include <iostream>
using namespace std;

const int eraser {10};
const int pen {20};
const int pencil {30};    

int main()
{
    int tool {eraser};

    switch (tool)
    {
        case eraser: {
            cout << "You have selected the eraser \n";
            break;
        }
        case pen: {
            cout << "You have selected the pen \n";
            break;
        }
        case pencil: {
            cout << "You have selected the pencil \n";
            break;
        }   
        default: {
            cout << "You have selected none";
            break;
        }
    }    

    return 0;
}