// 🎯 Ab Most Important Concept
// catch(...) (Catch All)

// Ye placement me bahut poocha jata hai.

#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 'A';
    }
    catch(...)
    {
        cout << "Exception Caught";
    }
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// Exception Caught

// ✅ Correct.

// Q3. catch(...) kya catch karta hai?

// ✅ Har type ki exception.

// Chahe:

// throw 10;

// ya

// throw 'A';

// ya

// throw 3.14;

// ya

// throw "Error";

// Sabko:

// catch(...)

// handle kar lega.

// ⭐ Golden Rule
// catch(...)

// 👉 Ye Universal Catch Block hai.

// Agar tumhe exception ka type nahi pata, to catch(...) use kar sakte ho.