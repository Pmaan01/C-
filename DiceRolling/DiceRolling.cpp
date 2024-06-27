#include <iostream>
#include <ctime>
#include <random>
#include <array>
#include <iomanip> // used for formatting output


using namespace std;

//This app rolls a dice count number of times and genereates random numbers using a random number generator engine.
int main(int argc, char** argv) 
{
    if (argc < 2)
    {
        std::cout << "Usage: diceRolling.exe count (count is number of times rolling the rice)\n";
            return 1;
    }

    std::default_random_engine eng(time(0));
    std::uniform_int_distribution<unsigned int> randInt(0, 9);  /// unsigned int is positive int no negatives.
    int totalCount{ atoi(argv[1]) };
   

    std::array<int, 10> frequencyArray{};

    for(int i = 0; i < totalCount; i++)
    {
        int face = randInt(eng);  //rolling a number/dice
        frequencyArray[face]++;
    }

    std::cout << "Face" << std::setw(13) << "Frequency" << endl;

    cout << "\n 0"<<setw(13)<<frequencyArray[0];
    cout << "\n 1" << setw(13) << frequencyArray[1];
    cout << "\n 2" << setw(13) << frequencyArray[2];
    cout << "\n 3" << setw(13) << frequencyArray[3];
    cout << "\n 4" << setw(13) << frequencyArray[4];
    cout << "\n 5" << setw(13) << frequencyArray[5];
    cout << "\n 6" << setw(13) << frequencyArray[6];
    cout << "\n 7" << setw(13) << frequencyArray[7];
    cout << "\n 8" << setw(13) << frequencyArray[8];
    cout << "\n 9" << setw(13) << frequencyArray[9];
    cout << endl;

}
