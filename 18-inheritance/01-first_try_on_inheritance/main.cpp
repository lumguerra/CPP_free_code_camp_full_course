#include <iostream>
#include "player.h"
using namespace std;

int main(){

    Player p1("football");
    cout << p1 << "\n";
    p1.set_first_name("Lucas");
    p1.set_last_name("Guerra");
    cout << p1;
    
    return 0;
}