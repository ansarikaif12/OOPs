// 🎯 Chhota sa Question

// Predict the output:

#include<iostream>
using namespace std;

int main()
{
    try
    {
        cout << "A" << endl;
        throw 100;
        cout << "B" << endl;
    }
    catch(int x)
    {
        cout << x << endl;
    }

    cout << "C";
}


// Step 1
// cout << "A";

// Output:

// A
// Step 2
// throw 100;

// Exception throw ho gayi.

// ⚠️ Yahin se program turant try block chhod deta hai.

// Step 3
// cout << "B";

// ❌ Ye line kabhi execute hi nahi hogi.

// Ye Exception Handling ka Golden Rule hai.

// Step 4

// Program catch(int x) me chala gaya.

// x = 100;

// Output:

// 100
// Step 5

// catch khatam hone ke baad program normally continue hota hai.

// cout << "C";

// Output:

// C
// Final Output
// A
// 100
// C

// ✅ Bilkul sahi.

// ⭐ Golden Rule (Interview)

// Jaise hi throw execute hota hai, try block ki baaki saari statements skip ho jaati hain aur control directly matching catch block me chala jata hai.

// Ye line interview me bahut kaam aati hai.