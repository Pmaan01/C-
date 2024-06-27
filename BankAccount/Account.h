#include <string>
#pragma once
//******Definition of Account Class******

class Account 
{
public:

	enum AccountType {
		chequing,
		saving
	};
    // Constructor to initialize balance
    Account(int val,std:: string name, AccountType t);

    //Method for depositing money in the account
    void deposit(int val,std:: string name);

    //Method for withdraw from the account
    void withdraw(int val,std:: string name);

    //Method to get balance

    int getBalance();

private:

	int balance{};
	std::string owner{};
	AccountType actype{ AccountType::saving };



};
