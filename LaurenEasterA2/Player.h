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

// GLOBAL VARIABLES ____________________________________________________________________________________

vector<SaveFile> saveFiles;
vector<Location> locations;

// FUNCTION DECLARATIONS ____________________________________________________________________________________

void testCharacter();
void waitForPlayer();

#endif