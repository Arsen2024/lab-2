#include "League.h"
#include <iostream>
#include <string>
#include <vector>
#include "Club.h"

using namespace std;

class League
{
private:
	string name;
	vector <Club> clubs;
public:
	League(string leagueName) {
		name = leagueName;
	}
	void addClub(Club club) {
		clubs.push_back(club);
	}
	void showClub() {
		cout << "League:" << name << endl;
		for (int i = 0; i < clubs.size(); i++) {
			cout << "Club:" << i + 1 << endl;
			clubs[i].showPlayers();
		}
	}

};
