#pragma once

#include <iostream>
#include <string>



class Person 
{
private:

    std::string first;
    std::string last;
    int age;
    int id;

public:

    Person(std::string f, std::string l, int a) :first(f), last(l), age(a), id(0)  // only method does not return anything
    {
    }
    Person() = delete; // to not make any create a default/ explicitly deleting default constructor. or compiler will create so either set default or delete deafault and copy constructor.... return object of this class

    //Person(Person const& src) = delete; // deleteing copy constructor created by complier....src are just a name and const is a signature ..... return object of this class

    Person& operator=(Person const& src) = delete; // to delete the assignment operation for security.....//Operation is a function //return object of this class

    bool operator==(Person const& rhs)         //bool represents what it will return comparison returns true or false  and inside person represents the rhs data type

    {
        //or return first == rhs.first && last == rhs.last && id == rhs.id;  works same
        if (first == rhs.first && last == rhs.last && id == rhs.id)
        {
            return true;
        }
        return false;
   }
    //Class Operation

    //setter for age
    void setAge(int a) {

        if (a <= 0) {

            std::cout << "Warning age must be positive";

        }
        age = a;
    }

    //getter for first name, last name age and id doesnot need parameter just returns the value.

    std::string getName() const
    {
        
      
        return first;
    }

    std::string getLastName() const
    {
        return last;
    }

    int getAge() const
    {

        return age;
    }

    int getId() const
    {
        return id;
    }

    std::string toString() const
    {

        std::string res = first + " " + last + ", age = " + std::to_string(age);   //privided by string class and converts int to string.
        return res;
    }

    //setters

    void setID(int i)
    {

     //first check to see id is positive
        if (i <= 0) 
        {
            std::cout << "setID: Please provide a Valid ID" <<std::endl;
            return;
        }

        i = id;
    }


};