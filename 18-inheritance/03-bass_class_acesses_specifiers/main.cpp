#include <iostream>
#include "person.h"
#include "player.h"

using namespace std;

int main(){

    Person Person1("Lucas Mazoni Guerra", 34, "Av. Ordem e Progresso, 1190");
    cout << "Person1: " << Person1 << '\n';

    Player player1;
    player1.m_full_name = "Sarah Guerra";

    cout << player1;

    
    return 0;
}