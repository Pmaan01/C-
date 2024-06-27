///In this applixcation we ask user at the launch of the app to give us a positive number num. Then we sum up the square of all number
///starting from 0 up to and including num. print the total at the end.

#include <iostream>

//declaring the function.
int computeSquareSum(int num);


int main(int argc, char* argv[]) { //Char pointer is an address to first character of the string

    for (int i = 0; i < argc; ++i) {
        std::cout << "\n argv[" << i << "] = " << argv[i];
    }
    // int num = argv[1][0] - "0"; for 24 because 2 is 50 in asci table and zero is 48 so 50-48 = 2 in number
    int num = atoi(argv[1]);

    //std::string first argue(argv[1]); to convert argu into string dont use pointer

    int sum = computeSquareSum(num);

        std::cout << " \nsqaure sum of " << num << " is " << sum << std::endl;

        int* pSum{&sum}; //Pointer getting location of sum psum is the name to save the address & uses to get the address
        *pSum = -1;  // Changing address of pSUm or overriding the content of sum 
        std::cout << "\n address of sum is " << pSum << " sum now is " << sum << std::endl;



        return 0;
}


//implementing the function.This function accumlates sum of squares from 0 till num, and returns the result.

int computeSquareSum(int num) {

    int sum{};
    int x{};


    do {
        sum += x * x;
        ++x;
    } while (x <= num);

    return sum;

}