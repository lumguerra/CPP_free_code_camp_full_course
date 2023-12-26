#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <string_view>
#include "person.h"

using namespace std;

class Player : public Person
{
    friend ostream &operator<<(ostream &out, const Player &Player);

public:
    Player() = default;
    Player(string_view game_param);

private:
    string m_game{"None"};
};

#endif
