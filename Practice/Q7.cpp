// Write a C++ program that satisfies the following requirements:

// Create a class named BankAccount.
// Data members:
// accountNumber
// accountHolderName
// balance
// Create two objects.
// Take input for both accounts.
// Print the details of the account having the highest balance.
// Rules
// ❌ No constructors
// ❌ No member functions
// ❌ No arrays
// ❌ No loops
// ❌ No functions outside main()
// ❌ No hints


#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    public:
    int accNum;
    string accHolderName;
    float balance;
};

int main(){
    BankAccount b1;
    BankAccount b2;

    cout<<"Enter the input for bankAccount 1: "<<endl;
    cin>>b1.accNum>>b1.accHolderName>>b1.balance;
    
    cout<<"Enter the input for bankAccount 2: "<<endl;
    cin>>b2.accNum>>b2.accHolderName>>b2.balance;

    if(b1.balance>b2.balance){
        cout<<"Details of Highest Balance: "<<endl;
        cout<<b1.accNum<<" "<<b1.accHolderName<<" "<<b1.balance<<endl;
    }
    else{
        cout<<"Details of Highest Balance: "<<endl;
        cout<<b2.accNum<<" "<<b2.accHolderName<<" "<<b2.balance<<endl;
    }
    
}