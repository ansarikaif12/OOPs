// 🔥 Friend Function - Output Question 2

// Predict the output without running the code.

#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int a)
    {
        x = a;
    }

    friend void show(A);
};

void show(A a)
{
    a.x = 100;
    cout << a.x << " ";
}

int main()
{
    A obj(50);

    show(obj);

    show(obj);
}

// Questions
// Output kya hoga?
// Reason bhi explain karna.

// (Dhyan se dekhna ki object friend function me kaise pass ho raha hai.)

// 100 100


// ✅ Correct!

// Output
// 100 100
// ⭐ Score: 10/10
// Reason

// Friend function ka parameter hai:

// void show(A a)

// Yahan object by value pass ho raha hai.

// Matlab:

// obj  ----copy---->  a

// Friend function ke andar:

// a.x = 100;

// Ye copy object ka x change kar raha hai.

// Original object obj ka x 50 hi rehta hai.

// Isliye:

// First Call

// Original:

// obj.x = 50

// Copy banti hai:

// a.x = 50

// Phir:

// a.x = 100;

// Print:

// 100

// Friend function khatam.

// Copy destroy.

// Original abhi bhi:

// obj.x = 50
// Second Call

// Dobara copy banti hai:

// a.x = 50

// Phir:

// a.x = 100;

// Print:

// 100



// 🎯 Placement Interview Tip

// Ye bahut common interview question hai:

// Difference
// void fun(A a)

// ➡️ Pass by Value

// Copy banti hai.
// Original object change nahi hota.
// void fun(A &a)

// ➡️ Pass by Reference

// Copy nahi banti.
// Original object modify hota hai.
// Fast bhi hota hai.