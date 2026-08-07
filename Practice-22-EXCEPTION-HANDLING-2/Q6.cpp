// 📂 Custom Exception (Bas Placement Level)

// Normally hum aise throw karte hain:

// throw 10;

// ya

// throw "Error";

// Lekin hum apni khud ki exception bhi bana sakte hain.

// Example:

#include<iostream>
using namespace std;

class MyException
{
};

int main()
{
    try
    {
        throw MyException();
    }
    catch(MyException)
    {
        cout << "Custom Exception Caught";
    }
}

// Output:

// Custom Exception Caught
// Interview Answer

// Q. What is a Custom Exception?

// A custom exception is a user-defined exception class that is created to represent application-specific errors.

// Kya iski coding interview me aati hai?

// 👉 Service-based companies: Bahut rarely.

// 👉 Product-based companies: Kabhi-kabhi basic concept pooch lete hain.

// Tumhare liye concept yaad hona enough hai.