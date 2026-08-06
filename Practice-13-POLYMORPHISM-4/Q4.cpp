// 💻 Coding Question 2 ⭐⭐⭐⭐☆

// Create an abstract class:

// Payment

// Requirements:

// virtual void pay() = 0;

// Create two child classes:

// UPI
// CreditCard

// Both should override:

// pay()
// Output
// Payment through UPI
// Payment through Credit Card
// Rules
// ❌ No hints.
// ❌ No skeleton code.
// ✅ Complete program.
// ✅ Use constructors only if you feel they are needed.'


#include<iostream>
using namespace std;

class Payment
{
public:
    virtual void pay() = 0;
};

class UPI : public Payment
{
public:
    void pay()
    {
        cout << "Payment through UPI" << endl;
    }
};

class CreditCard : public Payment
{
public:
    void pay()
    {
        cout << "Payment through Credit Card" << endl;
    }
};

int main()
{
    UPI u1;
    CreditCard c1;

    u1.pay();
    c1.pay();

    return 0;
}