#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    //Create a Account with $50 

    Account  savingAccount(50, "Tom", Account::chequing);

    //Display the balance

    cout << "Saving Account balance is " << savingAccount.getBalance()<<endl;
    savingAccount.withdraw(20, "Tom");
    cout<<"Remaining Balance "<<savingAccount.getBalance()<<endl;

    return 0;
}