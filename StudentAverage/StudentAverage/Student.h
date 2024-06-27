#pragma once
#include <string>
#include <vector>
// everything is public
struct Course
{
	std::string title;
	float mark;
};

class Student
{
public:
	// a constructor is a recipe for creating an instance of
	// this class.
    Student(std::string aname = "Not specified"):average(0), name(aname)
	{
	}
	std::string getName() const
	{
		return name;
	}

	float getAverage()
	{
		computeAverage();
		return average;
	}

	void setName(std::string aname);



private:
	std::string name;//full name firstname lastname
	float average;

	void computeAverage();  //can only use in the class
	std::vector<Course> courses;

};


