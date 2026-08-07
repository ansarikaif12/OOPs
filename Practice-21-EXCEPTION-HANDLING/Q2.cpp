// 🎯 Next Concept: Type Matching (Most Asked)

// Ab ek interview trap dekhte hain.

#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 10;
    }
    catch(char x)
    {
        cout << "Char";
    }

    cout << "End";
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?

// ❌ Koi output nahi.

// Program terminate (crash) ho jayega.

// Q3. Kya catch(char) throw 10 ko catch karega?

// ❌ No

// Kyun?

// Yahan:

// throw 10;

// 10 ka type hai:

// int

// Lekin catch hai:

// catch(char x)

// Ye char type ka exception pakadne ke liye hai.

// Compiler exact type matching dekhta hai.

// throw int
//       ❌
// catch char

// Match nahi hua.

// Isliye exception handle nahi hua aur program terminate ho gaya.

// ⭐ Golden Rule

// throw aur catch ka data type match hona chahiye.

// Examples:

// throw 10;
// catch(int x)      ✅
// throw 'A';
// catch(char x)     ✅
// throw 3.14;
// catch(double x)   ✅
// throw "Error";
// catch(const char* x)  ✅
// 📌 Interview Question

// Q. What happens if no matching catch block is found?

// Placement Answer:

// If no matching catch block is found, the exception remains unhandled and the program terminates abnormally.