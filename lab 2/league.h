#pragma once
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
	League(string leagueName);
	void addClub(Club club);
	void showClub();
	
};
