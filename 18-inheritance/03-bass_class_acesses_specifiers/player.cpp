#include "person.h"
#include "player.h"
#include <iostream>

using namespace std;

Player::Player()
{

}

ostream& operator<<(ostream& out, const Player& player){
    out << "Player[Full name: " << player.get_full_name() <<
                ", age: " << player.get_age() <<
                ", address: " << player.get_adress() << "]\n";
    return out;
}

Player::~Player()
{
    
}