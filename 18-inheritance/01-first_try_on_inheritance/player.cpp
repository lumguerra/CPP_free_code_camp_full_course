#include "person.h"
#include "player.h"
#include <string_view>

using namespace std;

Player::Player(string_view game_param)
    :m_game(game_param)
{
}

ostream& operator<<(ostream& out, const Player& player){
    out << "Player: [ game : " << player.m_game
        << "names: " << player.get_first_name()
        << " " << player.get_last_name() << "]";
    return out;
} 