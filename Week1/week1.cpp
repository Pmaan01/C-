#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define NumCustomers 2

struct Customer
{
	int num;
	string name;
};

// print the content of a vector
void printVec(std::vector<int> vec)
{
	for (int i = 0; i < vec.size(); ++i)
		cout << "vec[" << i << "] = " << vec[i] << ", ";
	cout << endl;
}

void printVec(std::vector<Customer> custom)
{
	for (int i = 0; i < custom.size(); ++i)
		cout << "customer[" << i << "]: " << custom[i].num << ", " << custom[i].name << endl;
	cout << endl;
}

int main()
{
	/*std::string name{};
	int houseNumber{};
	std::cout << "Please type in your name and your house number ";
	cin >> name;
	cin >> houseNumber;
	cout << "My name is " <<
		name<<"\n and my house number is "<<houseNumber<<std::endl;
*/

//int customerNumbers[NumCustomers] = {};
	vector<Customer> customerVec;
	// read 5 custromer numbers from command line and then print them:
	cout << "Please enter customer name and number in one row for each custormer:\n";
	for (int i = 0; i < NumCustomers; ++i)
	{
		int num;
		string name;
		cin >> num;
		cin >> name;
		customerVec.push_back({ num, name });
	}


	printVec(customerVec);

	//customerNumbers.pop_back();

	//printVec(customerNumbers);

	return 0;
}