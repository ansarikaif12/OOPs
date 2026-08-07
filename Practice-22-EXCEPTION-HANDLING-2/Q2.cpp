// 🎯 Next Placement Trap

// Predict the output:

#include<iostream>
using namespace std;

void test()
{
    throw 50;
}

int main()
{
    try
    {
        cout << "Start" << endl;

        test();

        cout << "Middle" << endl;
    }
    catch(int x)
    {
        cout << x << endl;
    }

    cout << "End";
}



// Output
// Start
// 50
// End

// ✅ Bilkul sahi.

// Execution
// Step 1
// cout << "Start";

// Output:

// Start
// Step 2
// test();

// Function call hua.

// Step 3
// throw 50;

// Exception throw ho gayi.

// Control seedha catch me chala gaya.

// Step 4
// catch(int x)
// {
//     cout << x;
// }

// Output:

// 50
// Step 5
// cout << "End";

// Output:

// End
// ❓"Middle" print kyun nahi hua?
// cout << "Middle";

// ❌ Kyuki test() ke andar exception throw hote hi try block ki baaki statements skip ho gayi.

// Ye Exception Handling ka sabse important rule hai.