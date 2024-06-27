#include <iostream>
#include <string>
#include<numeric>
#include <vector>


using namespace std;


float userinputForGrades{};
 vector<float> gradesVec{};

 void printVec(vector<float> vec) {
     cout << "[";
     for (int i = 0; vec.size(); ++i)
     {
         cout << vec[i];

         if (i != vec.size() - 1) 
         {

             cout << ", ";
         }

     }
     cout << "]";
     cout << "\n";
 }

void classAverage() {

    do 
    {
        cout << "Enter your grades one by one and when you are done type -1.";

        
        cin >> userinputForGrades;
        gradesVec.push_back(userinputForGrades);

    } while (userinputForGrades != -1);

}

void total(vector<float> vectorOfGrades) {
    float total = 1;
    // accumulate(vectorOfGrades.begin(), vectorOfGrades.end(), 0)

    for (int i = 0; i < size(vectorOfGrades); ++i) {
        
        total += vectorOfGrades[i];
    }

    float average{};
    average = float(size(vectorOfGrades)) - 1;
    float result = total / average;
    
    cout << result;
}


/*
* This app computes Average for a series of grades which it recieves as user input.
* The number of grades is not known
*/




int main() {

   
    classAverage();
    total(gradesVec);
    printVec(gradesVec);
    
   
// first ask user for giving its grades, one grade at a time.
// To finish , the user should give -1 as the last grade, so we know the grades input is over.
// As the grades are recieved, add them to a vector,  using push_back().
    // at the end find average add all the grades and divide them by the number of grades print the result at the end.

    return 0;


    

}