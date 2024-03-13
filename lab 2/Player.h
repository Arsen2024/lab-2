#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Player
{
private:
	string name;
	int age;
public:
	Player(string playerName, int playerAge);
	void playerInfo();
};

