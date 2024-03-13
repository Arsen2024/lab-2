#include "Club.h"
#include <string>
#include <vector>
#include <iostream>
#include "Player.h"

using namespace std;



	Club::Club(string clubName) {
		name = clubName;
	}
	void Club::addPlayer(Player player) {
		players.push_back(player);
	}
	void Club::showPlayers() {
		cout << name << endl;
		for (int i = 0; i < players.size(); i++)
		{
			cout << "Player" << i + 1 << ':';
			players[i].playerInfo();
		}
	}
