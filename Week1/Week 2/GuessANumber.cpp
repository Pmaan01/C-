#include <iostream>
#include <random>
#include <string>
#include <ctime>
#include "utility.h"

using namespace std;
/// <summary>
/// Create guess a number game.
/// </summary>

//compare an dprint message

void guessNumberGame() 
{
	cout << "In this game I choose a number and you guess it.\n If your guess is lower or higher than the chosen number guess again?\n Goal is to guess the number in fewest guesses.\n";
	bool response{};

	do
	{
		srand(time(0));
		//computer pick a number between 0 and 100
		int theNumber = rand() % 100;
		cout << "Choose a number";
		int gsdNumber{};
		cin >> gsdNumber;

		// Compare with computer number and prints the message
	
		while (isCorrect(gsdNumber, theNumber) == false)
		{

			cin >> gsdNumber;
		}
	
	
		cout << "congrats !! You guessed right~\n""Dou you want to play again";
			
			string str{};

			cin >> str;
			if (str == "yes") {
				response = true;
			}
			else{
				response = false;

		}

	}

	while (response == true);

	}
	int main()

{

	guessNumberGame();

		return 0;

}