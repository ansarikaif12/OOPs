// 😈 Placement Trap #6 (Last Trap)

// Ye bahut important hai.

#include<iostream>
using namespace std;

class Demo
{
public:

    void show(char a)
    {
        cout << "Char";
    }

    void show(int a)
    {
        cout << "Int";
    }
};

int main()
{
    Demo d;

    d.show('A');

    cout << endl;

    d.show(65);
}



// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// Char
// Int

// ✅ Correct.

// Q3.

// Why?

// Tumne likha:

// because the data type of both functions are different

// ✅ Correct.

// Lekin interview me agar interviewer thoda aur deep pooche:

// "But 'A' ki ASCII value to 65 hoti hai, phir show(int) kyun nahi call hua?"

// Tab answer hoga:

// Because 'A' is a character literal, so its type is char. The compiler first looks for an exact match. Since show(char) exists, it selects that function. It does not convert char to int when an exact char overload is available.

// Compiler ka preference order
// Exact Match        ✅ Highest Priority
// Promotion
// Conversion         ❌ Lowest Priority

// Yahan:

// d.show('A');

// Compiler dekhta hai:

// show(char)   // Exact Match ✅
// show(int)    // Conversion ❌

// To wo Exact Match choose karta hai.

// 🏆 Function Overloading (Part 1) Complete

// Tumne saare important placement traps solve kar liye:

// ✅ Different Number of Parameters
// ✅ Different Data Types
// ✅ Different Parameter Order
// ✅ Return Type Trap
// ✅ Default Argument Trap
// ✅ Character vs Integer Trap