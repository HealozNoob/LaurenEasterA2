/*
Project: Assignment 2 - Hunt the Wumpus Prototype
Author: Lauren Easter
Student ID: 30598079
*/

#ifndef SAVEFILE_H
#define SAVEFILE_H

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <sstream>
#include <algorithm>
#include "Enums.h"
#include "Location.h"
#include "Player.h"
using namespace std;

// Constants

const int MAX_SAVEFILES = 15;

// CLASS DEFINITION

class SaveFile {

	// public variables
public:

	// Constructors

	SaveFile();
	SaveFile(string saveFileName); //overloading constructor
	~SaveFile();

	// accessor methods
	string getSaveFileName();


	// mutator methods
	void setSaveFileName(string name);

private:

	// private variables
	string saveFileName;
};

#endif

