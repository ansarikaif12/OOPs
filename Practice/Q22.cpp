// 🚀 Question 20 (Static Members - Level 2)

// Write a C++ program.

// Create a class BankAccount.

// Data Members
// string accountHolder
// int accountNumber
// double balance
// static int totalAccounts
// Requirements
// Create a parameterized constructor.
// Whenever a new object is created, update the total number of accounts.
// Create a member function display() to print account details.
// Create a static member function showTotalAccounts() to print the total number of accounts.
// In main()

// Create the following objects:

// BankAccount b1("Kaif", 101, 25000);
// BankAccount b2("Aman", 102, 18000);
// BankAccount b3("Ali", 103, 32000);

// Then:

// Display all account details.
// Print the total number of bank accounts.
// Rules
// ❌ No hints.
// ❌ No user input.
// ❌ No internet.
// ✅ Write the complete program yourself.


#include<iostream>
using namespace std;
class BankAccount{
    string accHolder;
    int accNumber;
    double balance;
    static int totalAccounts;

    public:

    BankAccount(string accHolder, int accNumber, double balance): accHolder(accHolder), accNumber(accNumber), balance(balance){ //initializer list
        totalAccounts++;
    }

    void display(){
        cout<<"Account Holder: "<<accHolder<<endl;
        cout<<"Account Number: "<<accNumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

    static void showTotalAccounts(){
        cout<<"Total Accounts: "<<totalAccounts<<endl;
    }
};

int BankAccount::totalAccounts=0;

int main(){
    BankAccount b1("Kaif", 101, 25000);
    BankAccount b2("Aman", 102, 18000);
    BankAccount b3("Ali", 103, 32000); 
    
    b1.display();
    b2.display();
    b3.display();

    BankAccount::showTotalAccounts();
}



// 🎤 Interview Question

// Q1. Constructor static ho sakta hai?

// 👉 Answer: No.

// Reason:

// Constructor object create karne ke liye hota hai.

// Static members object ke bina exist karte hain.

// Isliye constructor ko static declare nahi kar sakte.