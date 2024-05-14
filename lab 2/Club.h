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
	Club();
	Club(string clubName);
	void addPlayer(Player player);
	void showPlayers();
	static void info();

	string getName() const;

	Club operator-(const Club& other)const;
	Club operator+(const Club& other)const;

	friend ostream& operator<<(std::ostream& os, const Club& club);
	friend istream& operator>>(std::istream& is, Club& club);

	Club(const Club& other); //Copy
	Club(Club&& other) noexcept; //Move
	~Club();

};


