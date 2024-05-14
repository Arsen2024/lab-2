#include "Club.h"
#include <string>
#include <vector>
#include <iostream>
#include "Player.h"

using namespace std;

	Club::Club() {}

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
	void Club::info() {
		cout << "This is club:" << endl;

	}


	string Club::getName() const {
		return this->name;
	}

	Club Club::operator-(const Club& other) const {
		Club club(*this);
		return club;
	}

	Club Club::operator+(const Club& other) const {
		Club combinedClub(name + other.getName()); 
		combinedClub.players.insert(combinedClub.players.end(), other.players.begin(), other.players.end()); 
		return combinedClub;
	}

	ostream& operator<<(std::ostream& os, Club& club) {
		os << "Club name"<< club.getName();
		return os;
	}

	istream& operator>>(std::istream& is, Club& club) {
		std::cout << "Enter Club name: ";
		is >> club.name;
		return is;
	}

	Club::Club(const Club& other) : name(other.name) {}
	
	Club::Club(Club&& other) noexcept : name(move(other.name)) {}

	Club :: ~Club() {}