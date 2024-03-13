#include "League.h"
#include <iostream>
#include <string>
#include <vector>
#include "Club.h"

using namespace std;

	League::League(string leagueName) {
		name = leagueName;
	}
	void League::addClub(Club club) {
		clubs.push_back(club);
	}
	void League::showClub() {
		cout << "League:" << name << endl;
		for (int i = 0; i < clubs.size(); i++) {
			cout << "Club:" << i + 1 << endl;
			clubs[i].showPlayers();
		}
	}


