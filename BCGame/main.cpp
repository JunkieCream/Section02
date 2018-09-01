#include <iostream>
#include <string>
#include "FBullCowGame.h"


void PrintIntro();
void PlayGame();
std::string GetGuess();
void Feedback(std::string Guess, int CurrentTry, int MaxTries);
bool AskToPlayAgain();

//TODO Rid off this public class
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
	constexpr int WORD_LENGTH = 5;
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
		int MaxTries = BCGame.GetMaxTries();
		int CurrentTry = BCGame.GetCurrentTry();
		std::string Guess = "";

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
std::string GetGuess()
{
	std::string Guess = "";
	int CurrentTry = BCGame.GetCurrentTry();

	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::getline(std::cin, Guess);
	return Guess;
}

//TODO Change for real feedback and maybe get rid off these function and send it to class
//Repeat his guess
void Feedback(std::string Guess, int CurrentTry, int MaxTries)
{
	//TODO Print number of bulls and cows
	std::cout << "Your guess was: " << Guess << std::endl;
	//std::cout << "You have " << MaxTries - CurrentTry << " turns left\n";
	std::cout << std::endl;
	return;
}

bool AskToPlayAgain()
{
	std::string Response = "";
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