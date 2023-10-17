#include <iostream>
using namespace std;

int main()
{
    bool green_light {true};
    bool red_light {false};

    cout << std::boolalpha;
    cout << "green light: " << green_light << "\n";
    cout << "red light: " << red_light << "\n\n";

    if( green_light ){
        cout << "Go ahead \n";
    } else {
        cout << "Don't move!\n";
    }
    if ( red_light ){
        cout << "The light is red!\n";
    } else {
        cout << "The light is green\n";
    }
     
    return 0;
}