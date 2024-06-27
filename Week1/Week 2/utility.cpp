#include <iostream>
#include "utility.h"

using namespace std;



bool isCorrect(int userNum, int compNum) {
	bool result{ true };


	if (userNum < compNum)
	{
		cout << "Your guess is low. Try again \n";
		result = false;

	}
	else if (userNum > compNum) {
		cout << "Your Guess is high. Try again \n";
		result = false;


	}

	return result;
}
