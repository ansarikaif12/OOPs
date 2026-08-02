// 😈 Practice 24 (Placement Twist)

// Ab thoda twist.

// Create two classes.
// Account
// Protected:
// int accountNo
// Public:
// Constructor
// CurrentAccount
// Publicly inherit from Account
// Public:
// Constructor
// showAccount()
// Rule

// Inside main() do this:

// CurrentAccount c1(101);

// c1.showAccount();

// Aur iske baad ek aur line likho jo intentionally compile-time error degi.


#include<iostream>
using namespace std;

class Account{
    protected:
    int accountNo;
    public:
    Account(int a): accountNo(a){

    }
};

class CurrentAccount: public Account{
    public:
    CurrentAccount(int a): Account(a){

    }

    void showAccount(){
        cout<<accountNo<<endl;
    }
};


int main(){
    CurrentAccount c1(101);
    c1.showAccount();
    cout<<c1.accountNo;
}