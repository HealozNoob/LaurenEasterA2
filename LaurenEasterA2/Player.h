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

// Game setup

void gameSetup();

void displayMainMenu(); // starts the game with a main menu, like most games. Has options for NEW GAME or LOAD GAME
void loadSaveFiles(); // loads savefiles into system at runtime
void newGameSelected();
void loadGameSelected();

// Displays title at top of screen for continuity
void displayTitle();
void displayInformationText();

// NEW GAME
// Player customising preferences
void recievePlayerInput();
void recievePlayerName(string name);
void recievePlayerSkillLevel(int skillLevel);  // skill level is ranked from 1-3, easy, medium and hard

// Carrying out calculations for the hazards and locations
void initialiseGameVariables();
void initialiseLocations();
void initialiseHazards();

// LOAD GAME
void displaySaveFiles();
void selectSaveFile();

// Playing the game
void displayPlayScreen();

// Large function to make main function cleaner
void playerTurn();

// Post-game
void gameFinished();

#endif