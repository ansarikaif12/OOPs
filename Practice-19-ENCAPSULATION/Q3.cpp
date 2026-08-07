// 🎯 Final Encapsulation Question (Most Asked)
#include<iostream>
using namespace std;

class Bank
{
private:
    int balance = 5000;

public:
    void deposit(int amount)
    {
        balance += amount;
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Bank b;

    b.deposit(2000);

    cout << b.getBalance();
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?

// Initial balance:

// 5000

// After:

// b.deposit(2000);

// Balance:

// 7000

// Output:

// 7000
// Q3. Kya balance ko directly access kar sakte hain?

// ❌ No

// Example:

// b.balance = 10000;

// ❌ Compile Error.

// Q4. Kyun?

// Kyuki:

// balance

// private hai.

// Private members ko class ke bahar se directly access nahi kar sakte.

// Sirf public functions jaise:

// deposit()
// getBalance()

// ke through hi access kar sakte hain.

// ⭐ Placement Interview Question
// Q. Difference between Data Hiding and Encapsulation?

// Ye bahut poocha jata hai.

// Encapsulation

// Data aur functions ko ek class me combine karna.

// Example:

// class Student
// {
// private:
//     int marks;

// public:
//     void setMarks(int);
//     int getMarks();
// };
// Data Hiding

// Private access modifier ki madad se data ko direct access se bachana.

// Example:

// private:
//     int marks;
// ⭐ Easy Trick
// Encapsulation
// =
// Data + Functions ek class me

// Data Hiding
// =
// private se data ko hide karna

// 📌 Yaad rakho:

// Data Hiding is a part of Encapsulation.
// Encapsulation is a broader concept.
