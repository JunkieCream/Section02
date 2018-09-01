#include "FBullCowGame.h"
#include <iostream>

FBullCowGame::FBullCowGame() { Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const
{
	return false;
}

void FBullCowGame::Reset()
{
	MyCurrentTry = 1;

	const int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;
	return;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
	return false;
}

FString FBullCowGame::ChooseTheWord()
{
	return FString();
}

//receives a valid guess, increments turn and returns count
BullCowCount FBullCowGame::SubmitGuess(FString)
{
	// increment the turn number
	MyCurrentTry++;
	// setup a return variable
	BullCowCount BullCowCount;
	// loop through all letters
		// compare letters against hidden word

	return BullCowCount;
}
