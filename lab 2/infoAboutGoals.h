#pragma once
#include <iostream>
#include <string.h>
#include "Player.h"
using namespace std;

class infoAboutGoals:public Player

{
private:
	int goalsScored;
public:
	infoAboutGoals();
	infoAboutGoals(string playerName, int playerAge, int goals);

	void footballPlayerInfo();

	infoAboutGoals(infoAboutGoals& other);
	infoAboutGoals(infoAboutGoals&& other) noexcept;

	infoAboutGoals& operator=(const infoAboutGoals& other);

};

