// 😈 Placement Trap #2 (Most Asked)

// Ab dekhte hain ye compile hoga ya nahi.

#include<iostream>
using namespace std;

class Demo
{
public:

    int show(int a)
    {
        return a;
    }

    double show(int a)
    {
        return a;
    }
};

int main()
{
    Demo d;
}



// Q1.

// Will it compile?

// No

// ✅ Correct.

// Q2.

// Why?

// Ye answer interviewer expect karta hai.

// Code
// int show(int a)
// {
//     return a;
// }

// double show(int a)
// {
//     return a;
// }

// Dono functions me:

// Function name = show ✅
// Number of parameters = 1 ✅
// Parameter type = int ✅

// Sab kuch same hai.

// Sirf return type different hai.

// Compiler function ko call hone se pehle identify karta hai. Us waqt compiler sirf function name aur parameters dekhta hai.

// Return type dekhkar compiler overload nahi karta.

// Isliye ye compile-time error deta hai.

// ⭐ Golden Rule (Very Important)
// ✅ Valid Function Overloading
// show(int)
// show(double)
// show(int, int)
// show(int, double)
// show(double, int)
// ❌ Invalid Function Overloading
// int show(int);
// double show(int);

// 🚫 Sirf return type alag hone se function overload nahi hota.

// 🎤 Placement Interview Question

// Interviewer:

// Can we overload a function by only changing its return type?

// Placement Ready Answer

// No. Function overloading is based on the function signature, and the return type is not part of the function signature. Therefore, changing only the return type results in a compilation error.

// ⚠️ Ye line bahut important hai. Isko yaad kar lo.xxxx