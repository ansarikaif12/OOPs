// Perfect. Placement ke hisaab se sirf important concepts karenge.

// 📂 Nested Try-Catch (Basic)

// ⭐⭐☆☆☆ Placement Importance: Low-Medium

// Bas concept samajh lo.

// Code
#include<iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Outer Try" << endl;

        try
        {
            cout << "Inner Try" << endl;

            throw 10;
        }
        catch(int x)
        {
            cout << "Inner Catch: " << x << endl;
        }

        cout << "After Inner Try" << endl;
    }
    catch(...)
    {
        cout << "Outer Catch";
    }

    cout << "Program End";
}
// Execution
// Step 1
// Outer Try
// Step 2
// Inner Try
// Step 3
// throw 10;

// Exception aa gayi.

// Step 4

// Compiler pehle Inner Catch dekhega.

// catch(int x)

// ✅ Match mil gaya.

// Output:

// Inner Catch: 10
// Step 5

// Exception handle ho chuki hai.

// Isliye program continue karega.

// After Inner Try
// Step 6

// Outer Catch execute hoga?

// ❌ Nahi.

// Kyuki exception already handle ho chuki hai.

// Step 7
// Program End
// Final Output
// Outer Try
// Inner Try
// Inner Catch: 10
// After Inner Try
// Program End
// ⭐ Golden Rule
// Exception pehle nearest catch block ko search karti hai.

// Agar nearest catch handle kar de,
// to outer catch execute nahi hota.
// 🎯 Interview Question

// Agar Inner Catch hata dein:

// try
// {
//     try
//     {
//         throw 10;
//     }
//     // No catch here
// }
// catch(int x)
// {
//     cout << x;
// }

// To kya hoga?

// ✅ Exception Outer Catch me chali jayegi.

// Bas itna hi yaad rakhna. Nested Try-Catch complete. ✅