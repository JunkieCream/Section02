/* This is console executable, that makes use of the BullCow class.
This acts as the view in a MVC pattern, and is responsible for all user interactions.
For game logic see FBullCowGame class.*/
#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetGuess();
void Feedback(FText Guess, int32 CurrentTry, int32 MaxTries);
bool AskToPlayAgain();

//TODO Rid off this public initialisation
FBullCowGame BCGame; // instantiate a new game

int main()
{
	PrintIntro();

	PlayGame();

	return 0;
}

//Game introduction
void PrintIntro()
{
	constexpr int32 WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls & Cows game" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thiking of?\n" << std::endl;
	return;
}

//loop for number of turns
void PlayGame()
{
	do
	{
		BCGame.Reset();
		int32 MaxTries = BCGame.GetMaxTries();
		int32 CurrentTry = BCGame.GetCurrentTry();
		FText Guess = "";

		//TODO change the loop to while after adding the guess validation
		for (CurrentTry; CurrentTry <= MaxTries; CurrentTry++)
		{

			Guess = GetGuess();
			//TODO add guess validation in the loop
			// Submit valid guess to the game
			Feedback(Guess, CurrentTry, MaxTries);

		}
	} while (AskToPlayAgain() == true);
	//TODO add a game summary
}

//Get a guess from the user
FText GetGuess()
{
	FText Guess = "";
	int32 CurrentTry = BCGame.GetCurrentTry();

	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::getline(std::cin, Guess);
	return Guess;
}

//TODO Change for real feedback and maybe get rid off these function and send it to class
//Repeat his guess
void Feedback(FText Guess, int32 CurrentTry, int32 MaxTries)
{
	//TODO Print number of bulls and cows
	std::cout << "Your guess was: " << Guess << std::endl;
	//std::cout << "You have " << MaxTries - CurrentTry << " turns left\n";
	std::cout << std::endl;
	return;
}

bool AskToPlayAgain()
{
	FText Response = "";
	std::cout << "Do you want to play again? (y/n) ";
	std::getline(std::cin, Response);

	if (Response[0] == 'y' || Response[0] == 'Y')
	{
		std::cout << std::endl;
		return true;
	}
	else
	{
		std::cout << std::endl;
		return false;
	}

	return false;
}