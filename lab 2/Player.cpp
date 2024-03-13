#include "Player.h"
#include <iostream>
#include <string.h>

using namespace std;

	Player::Player(string playerName, int playerAge) {
		name = playerName;
		age = playerAge;
	}
	void Player::playerInfo() {
		cout << "Name:" << name << ",Age:" << age << endl;
	}
