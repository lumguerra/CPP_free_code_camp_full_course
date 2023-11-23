#include "person.h"
#include "player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    cout << "Default constructor of Player called\n";
}

ostream& operator<<(ostream& out, const Player& player){
    out << "Player[Full name: " << player.get_full_name() <<
                ", age: " << player.get_age() <<
                ", address: " << player.get_address() << "]\n";
    return out;
}

Player::~Player()
{
    
}