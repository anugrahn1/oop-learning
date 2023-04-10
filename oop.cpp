#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
public:  //access specifier - all the members are accessible outside the class
    string name; //members variables - attributes
    int balance;

    void withdraw (int amount)  //memeber functions - methods
    {
        balance = balance - amount;
    }
    void print()
    {
        cout << name << " has " << balance << " dollars " << endl;
    }
};


int main()
{
    BankAccount account1; // account 1 is an object/instance of the BankAccount class
    account1.name = "Nageeb";
    account1.balance = 3000;

    account1.print();

    BankAccount account2;
    account2.name = "Kulvinder";
    account2.balance = 1000;

    account2.print();

    account2.withdraw(100);
    
    account2.print();
    









    return 0;
}