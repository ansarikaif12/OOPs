// 🎯 Placement Trap 2

// Predict the output.

#include<iostream>
using namespace std;

class Test
{
private:
    int x = 50;

    friend void display(Test);
};

void display(Test t)
{
    cout << t.x << endl;
}

int main()
{
    Test t1;

    display(t1);

    cout << t1.x;
}


// Q1. Will it compile?

// ❌ No

// Q2. Error kis line me hai?
// cout << t1.x;

// ✅ Isi line par compile-time error aayega.

// Q3. Why?
// Ye line:
// display(t1);

// ✅ Chal jayegi.

// Kyun?

// Kyuki display() ko friend declare kiya gaya hai.

// friend void display(Test);

// Isliye uske paas x ko access karne ki permission hai.

// Lekin:

// cout << t1.x;

// ❌ Error.

// Kyun?

// Kyuki main() friend function nahi hai aur x private hai.

// Isliye main() directly access nahi kar sakta.

// ⭐ Golden Rule
// Friend Function
// ✔ Class ka member nahi hota.
// ✔ Private members access kar sakta hai.
// ✔ Object se call nahi hota.
// ✔ Normal function ki tarah call hota hai.