#include "Account.h"
#include <iostream>
#include <string>


Account::Account(int num,std:: string name, AccountType t):owner(name),actype(t)
{

    std::cout << "Account created\n";
    if (num >= 0) {
        balance = num;
      
    }
    else {
        std::cout << "Warning! Account balance cannot be negative. Balance set to 0.\n ";
        balance = 0;
        


    }
   // owner = name;
   // actype = t;

}

void Account::deposit(int val, std::string name)
{
    balance += val;
    owner = name;
   
}

void Account::withdraw(int val, std::string name)
{
    if (balance >= val) {
        balance -= val;
        owner = name;
     }
    else {
       
        std::cout << "Don't have enough money";
        owner = name;
    }
}

int Account::getBalance()
{
   
    return balance; \
}
