#include "Player.h"
#include <iostream>
#include <string.h>

using namespace std;

class Player
{
private:
	string name;
	int age;
public:
	Player(string playerName, int playerAge) {
		name = playerName;
		age = playerAge;
	}
	void playerInfo() {
		cout << "Name:" << name << ",Age:" << age << endl;
	}
};