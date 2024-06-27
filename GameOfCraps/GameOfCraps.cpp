#include <iostream>
#include <ctime>
#include <random>

using namespace std;

enum Status{CONTINUE, WON, LOST};

unsigned int rollDice(); //declaration for a function that rolls 2 dice and returns the sum of the faces.


int main()

{
    rollDice();

    int diceResult = rollDice();

    int playerPoints = 0;
    cout << diceResult;


    int i = 0;
    while(i < diceResult)

    {
        if (diceResult == 7 || diceResult == 11)
        {
            cout << " won";
            break;
        }

        else if (diceResult == 2 || diceResult == 3 || diceResult == 12);
        {
            cout << "lost";
            break;
        }

        if (diceResult == 4 || diceResult == 5 || diceResult == 6 || diceResult == 8 || diceResult == 9 || diceResult == 10)
        {
            cout << "continue";
            playerPoints += diceResult;
        }
        i++;
    }
    
}

//Implementation
unsigned int rollDice() 
{
    std::default_random_engine eng(time(0));
    std::uniform_int_distribution<unsigned int> randInt(1, 6), randInt2(1, 6);


    int face1 = randInt(eng);
    int face2 = randInt2(eng);
    return face1 + face2;

}



