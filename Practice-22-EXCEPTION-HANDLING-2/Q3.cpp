// 🎯 Ab Next Concept: throw with Custom Message

// Real projects me hum numbers nahi, messages throw karte hain.

// Example:

#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw "Invalid Password";
    }
    catch(const char* msg)
    {
        cout << msg;
    }
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// Invalid Password
// Q3. throw "Invalid Password" ka data type?

// Options:

// A. string

// B. char

// C. const char*

// D. char[]

// ✅ Answer: C. const char*

// Kyun?

// Jab tum likhte ho:

// "Hello"

// to C++ me string literal ka type const char* ke roop me treat kiya jata hai.

// Isliye catch bhi likhna padta hai:

// catch(const char* msg)

// Agar likhoge:

// catch(int x)

// ❌ To exception catch nahi hogi aur program terminate ho jayega.

// ⭐ Golden Rule
// throw 10          → catch(int)

// throw 'A'         → catch(char)

// throw 3.14        → catch(double)

// throw "Hello"     → catch(const char*)

// Throw aur Catch ka type match hona zaruri hai.