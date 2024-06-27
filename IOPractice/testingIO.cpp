#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "Person.h"


using namespace std;


/*
*open file containing persons's data
* build a vector out of the data. then find the 
* Average age of the persons. Finally split the vector
* into 2 vectors: persons whose age is less than 
* average and those wqith age above average.
* finally save the 2 vectors to an output file.
* We pass in input file as command line argum,ent.
* For example: >testingIO. exe listofNames.txt
* argv[0] is testingIO.exe"
* argv[1] is "ListofNames.txt"
*/

int main(int argc, char** argv)  // argc takes 2 files and argv takes input from list odf names. argv is like an vector
{
    //first check there are enough arguments:
    if (argc < 2) {
        cout << "Usage: testingIO.exe filename\n";
        return 1;
    }

    else
    {
        cout << "Processing input file " << argv[1] << endl;

        //opening input line for processing

        std::ifstream fs(argv[1]);

        //check if file is properly open for reading
        vector<Person> PersonVec{};
        if (fs.is_open())
        {
            
            string aline{};

            while (std::getline(fs, aline))   //getline is a function of iostream 
            {
                cout << "line read: " << aline << endl;
                std::stringstream ss(aline);
                string first, last;
                int age;
                ss >> first >> last >> age; //printing << output now its input >>

                Person person1(first, last, age);   
                PersonVec.push_back(person1);
                //PersonVec.push_back({ first, last, age }); this is also posible
            }
            fs.close();

            //finding average age of persons.
            //int total = 0;
            //int average = 0;
          
            size_t averageAge{};


            //for(auto& per: PersonVec){ averageAge += per.getAge()}
            for (int i = 0; i < PersonVec.size(); i++) 
            {

                Person aPer = PersonVec[i];
                averageAge += aPer.getAge();
            }

             averageAge /= PersonVec.size();
             cout << "Average: " << averageAge << endl;


            //if (typeid(i) == typeid(int)) {
                //total += i;
            //}
            //average = total / PersonVec.size();      
               
            // create 2 vectors, one for persons with age < average and another for persons with age greater or equal to average.

            vector <Person> theYoungs;
            vector <Person> theWises;

            for (auto& per : PersonVec)
            {
                if (per.getAge() < averageAge)
                {

                    theYoungs.push_back(per);
                }
                else
                {
                    theWises.push_back(per);
                }
            }
                  
                //save youngs and wises in separete output files,

                std::ofstream yf("theYoungs.txt");
                if (yf.is_open()) 
                {
                    for (auto& aper : theYoungs) 
                    {
                        string aline = aper.getName() + " " + aper.getLastName() + " " + std::to_string(aper.getAge());

                        cout << aline << endl;
                        yf << aline << endl;

                    }
                    yf.close();
                }

            

        }
           

        cout << "Number of persons: " << PersonVec.size() << endl;

    }
    return 0;
}


