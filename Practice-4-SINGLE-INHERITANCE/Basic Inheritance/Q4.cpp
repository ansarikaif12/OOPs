// 💻 Practice 04 (🟡 Medium)

// No hints.

// Create two classes:

// BankAccount
// Private:
// string holderName
// double balance
// Public:
// Constructor
// displayAccount()
// SavingsAccount

// Publicly inherit from BankAccount

// Private:
// double interestRate
// Public:
// Constructor
// calculateInterest() (Print interest amount)
// main()

// Create one object.

// Call:

// Account details
// Interest calculation

#include <iostream>
using namespace std;

class BankAccount
{
private:
    string holderName;
    double balance;

public:
    BankAccount(string hName, double bal)
        : holderName(hName), balance(bal)
    {
    }

    void displayAccount()
    {
        cout << "Account Holder : " << holderName << endl;
        cout << "Balance        : " << balance << endl;
    }

    double getBalance()
    {
        return balance;
    }
};

class SavingAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingAccount(string hName, double bal, double rate)
        : BankAccount(hName, bal), interestRate(rate)
    {
    }

    void calculateInterest()
    {
        double interest = (getBalance() * interestRate) / 100;

        cout << "Interest Rate  : " << interestRate << "%" << endl;
        cout << "Interest Amount: " << interest << endl;
    }
};

int main()
{
    SavingAccount s1("Kaif", 2000, 5);

    s1.displayAccount();
    s1.calculateInterest();

    return 0;
}