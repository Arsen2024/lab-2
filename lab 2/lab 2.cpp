#include <iostream>
#include <string.h>
#include <vector>
#include "Player.h"
#include "Club.h"
#include "league.h"

using namespace std;

int main()
{
    Player player1("John",25);
    Player player2("Messi", 36);

    Club club1("Girona");
    club1.addPlayer(player1);
    club1.addPlayer(player2);

    Player player3("Ronaldo", 37);
    Player player4("Mudryk", 23);

    Club club2("Chelsea");
    club2.addPlayer(player3);
    club2.addPlayer(player4);

    League league("LaLiga");
    league.addClub(club1);
    league.addClub(club2);

    league.showClub();

    return 0;
}

