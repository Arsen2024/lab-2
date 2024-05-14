#include "infoAboutGoals.h"
#include "Player.h"
#include <iostream>
#include <string.h>

using namespace std;
    
    infoAboutGoals::infoAboutGoals() {}
    infoAboutGoals::infoAboutGoals(string playerName, int playerAge, int goals) : Player(playerName, playerAge), goalsScored(goals) {}

    void infoAboutGoals::footballPlayerInfo() {
        playerInfo(); 
        cout << "Goals Scored: " << goalsScored << endl;
    }

    infoAboutGoals::infoAboutGoals(infoAboutGoals& other) : goalsScored(other.goalsScored) {}
    infoAboutGoals::infoAboutGoals(infoAboutGoals&& other) noexcept : goalsScored(move(other.goalsScored)) {}

    infoAboutGoals& infoAboutGoals::operator=(const infoAboutGoals& other) {
        if (this != &other) {
            Player::operator=(other);
            goalsScored = other.goalsScored;
        }
        return *this;
        
    }