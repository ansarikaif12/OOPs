// 🎯 Placement Question 1

// Predict the output.

#include<iostream>
using namespace std;

void test()
{
    cout << "A" << endl;

    throw 10;

    cout << "B" << endl;
}

int main()
{
    try
    {
        test();

        cout << "C" << endl;
    }
    catch(int x)
    {
        cout << x << endl;
    }

    cout << "D";
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?

// Tumne likha:

// A
// C
// 10
// D

// ❌ Wrong

// Correct Output
// A
// 10
// D
// Execution
// Step 1
// test();

// Call hua.

// Step 2
// cout << "A";

// Output:

// A
// Step 3
// throw 10;

// Exception throw ho gayi.

// ⚠️ Yahin se test() function turant exit ho gaya.

// Isliye:

// cout << "B";

// ❌ Skip.

// Step 4

// Exception main() ke catch me pahunch gayi.

// catch(int x)

// Output:

// 10
// Step 5

// Ab dhyan dena. 👇

// cout << "C";

// ❌ Ye bhi skip ho gaya.

// Kyun?

// Kyuki test() ke baad normal execution continue nahi hota. Exception aate hi control seedha catch block me chala jata hai.

// Step 6

// catch ke baad:

// cout << "D";

// Output:

// D
// Final Output
// A
// 10
// D
// ⭐ Golden Rule (Bahut Important)
// throw execute hote hi,

// ✔ Current function turant exit ho jata hai.
// ✔ try block ki baaki statements skip ho jaati hain.
// ✔ Control seedha matching catch block me chala jata hai.

// Ye line interview me bahut poochi jaati hai.
