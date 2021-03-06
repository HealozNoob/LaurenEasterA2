/*
Project: Assignment 2 - Hunt the Wumpus Prototype
Author: Lauren Easter
Student ID: 30598079
*/

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
#include "Enums.h"
#include "Location.h"
#include "SaveFile.h"
using namespace std;

// Constants

// CLASS DEFINITION

class Player {

	// public variables
public:

	// Constructors

	Player();
	Player(string name, vector<string> locationExits, string locationDescription, LocationType type); //overloading constructor
	~Player();

	// accessor methods
	


	// mutator methods
	

private:

	// private variables
	string playerName;
	int arrowCount;
	int lanternTurnsLeft;


};


#endif