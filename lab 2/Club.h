#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Player.h"

using namespace std;

class Club
{
private:
	string name;
	vector <Player> players;
public:
	Club(string clubName);
	void addPlayer(Player player);
	void showPlayers();

};

