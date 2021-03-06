#pragma once
#include <string>

using FString = std::string;
using int32 = int;

struct BullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //TODO Make a more rich return value.
	bool CheckGuessValidity(FString); //TODO Make a more rich return value.
	FString ChooseTheWord();
	// Type for guess validation and counting bulls and cows
	BullCowCount SubmitGuess(FString);

private:
	//see constructor for initialisation
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};