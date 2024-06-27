///This program tests how random numbers genrated by computer are actually random.

#include <iostream>
#include <random>
#include <ctime>
#include <vector>

//This function genrates count number of random integers between 0 and range
//and finds the average and the deviation from the average

void testRandomness(int range, int count);

//Practice change this application to recieve range and count as command line argument.

int main() {

    std::srand(std::time(nullptr));

    testRandomness(20, 1000000);

    return 0;
}

void testRandomness(int range, int count) {
     
    std::vector<int> myVec(range, 0 );//[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0...0] to track the number of random numbers

    for (int i = 0; i < count; ++i) {
        int aRandomNUm =  std::rand() % range;
        myVec[aRandomNUm] += 1;
    }

    // myVec will be like [500,500, 800,300....total 10000]
    //find average of random numbers:

    int average = 0;

    for (int i = 0; i < range; ++i) {
        average += i * myVec[i];

    }

    average /= count;

    std::cout << "average of  " << count << "Random number in range " << range << " is " << 
        average << std::endl;

    for (int num : myVec)
        std::cout << num << ", ";
 

}