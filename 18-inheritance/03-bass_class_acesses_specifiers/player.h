#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"

using namespace std;

class Player : public Person
{
    friend ostream& operator<<(ostream& out, const Player& player);
public:
    Player();
    ~Player();

    void play(){}
private:
    int m_carrer_start_year{0};
    double m_salary{0.0};
    int health_factor{0};
};


#endif