/*
Project: Assignment 2 - Hunt the Wumpus Prototype
Author: Lauren Easter
Student ID: 30598079
*/

#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
#include "Enums.h"
using namespace std;

// Constants

const int NUMBER_OF_LOCATIONS = 20;

// CLASS DEFINITION

class Location {

	// public variables
public:

	// Constructors

	Location();
	Location(string name, vector<string> locationExits, string locationDescription); //overloading constructor
	~Location();

	// accessor methods
	string getLocationName();
	vector<string> getLocationExits();
	string getLocationDescription();


	// mutator methods
	void setLocationName(string name);
	void setLocationExits(vector<string> exits);
	void setLocationDescription(string description);
	
private:

	// private variables
	string locationName;
	vector<string> locationExits;
	string locationDescription;
};

#endif