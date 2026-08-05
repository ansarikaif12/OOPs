// Aaj ka Topic
// ⭐ Function Overloading

// Sabse pehle ek question.

// Ye code dekho.
#include<iostream>
using namespace std;

class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator c;

    cout << c.add(5, 3) << endl;

    cout << c.add(5, 3, 2);
}


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// 8
// 10

// ✅ Correct.

// Q3.

// Why doesn't the compiler get confused?

// Tumne likha:

// because both functions have different parameters so that compiler don't confuse

// ✅ Concept 100% correct.

// Bas interview me thoda professional bolna:

// The compiler distinguishes overloaded functions based on their function signature (number, type, or order of parameters). Since both add() functions have different parameter lists, the compiler knows exactly which function to call.


// ⭐ Golden Rule

// Function Overloading = Same Function Name + Different Parameter List

// Parameter list different ho sakti hai:

// Number of parameters ✅
// Type of parameters ✅
// Order of parameters ✅