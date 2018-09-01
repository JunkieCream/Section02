#include "FBullCowGame.h"
#include <iostream>

FBullCowGame::FBullCowGame() { Reset(); }

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const
{
	return false;
}

void FBullCowGame::Reset()
{
	MyCurrentTry = 1;
	MyMaxTries = MAX_TRIES;
	return;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}

std::string FBullCowGame::ChooseTheWord()
{
	return std::string();
}