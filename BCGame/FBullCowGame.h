#pragma once
#include <string>

class FBullCowGame
{
public:
	FBullCowGame(); // constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //TODO Make a more rich return value.
	bool CheckGuessValidity(std::string); //TODO Make a more rich return value.
	std::string ChooseTheWord();
	// TODO make New Type for guess validation and counting bulls and cows

private:
	//see constructor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
	const int MAX_TRIES = 8;
};