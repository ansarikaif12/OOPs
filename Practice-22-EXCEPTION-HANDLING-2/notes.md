<!-- // Perfect. Ab Exception Handling ka next concept start karte hain.

// 📂 Throw from Function

// ⭐⭐⭐⭐⭐ Placement Importance: High

// Abhi tak hum throw ko main() ke andar use kar rahe the.

// Lekin real projects me exception functions se throw hoti hai.

// Example
// #include<iostream>
// using namespace std;

// void check()
// {
//     throw 100;
// }

// int main()
// {
//     try
//     {
//         check();
//     }
//     catch(int x)
//     {
//         cout << x;
//     }
// }
// Execution
// Step 1
// check();

// Function call hua.

// Step 2

// Function ke andar:

// throw 100;

// Exception throw ho gayi.

// Step 3

// Program turant check() se bahar aa gaya.

// Control wapas:

// try

// me aaya.

// Step 4

// Matching catch mila.

// catch(int x)

// Output:

// 100
// Visualization
// main()

// try
//  │
//  ▼
// check()
//  │
//  │ throw 100
//  ▼
// catch(int)
//  │
//  ▼
// print 100
// ⭐ Golden Rule

// Exception function ke andar throw ho sakti hai aur usse caller function (jaise main) me catch kiya ja sakta hai. -->