// 🎯 Practice Question

// Predict the output:

#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 'A';
    }
    catch(int x)
    {
        cout << "Integer";
    }
    catch(char x)
    {
        cout << "Character";
    }

    cout << " End";
}


// Step 1
// throw 'A';

// Exception type = char

// Step 2

// Compiler pehla catch check karega.

// catch(int x)

// ❌ Match nahi hua.

// Step 3

// Dusra catch check karega.

// catch(char x)

// ✅ Match ho gaya.

// Output:

// Character
// Step 4

// Program continue karega.

// cout << " End";

// Output:

// Character End
// ⭐ Important Point

// Tumne sirf "Character" likha.

// Lekin final output hoga:

// Character End

// Kyuki catch ke baad program normally continue karta hai.