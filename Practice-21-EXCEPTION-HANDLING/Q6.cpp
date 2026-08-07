// 🚨 Interview Trap (Bahut Important)

// Ye code dekho:

// try
// {
//     throw 10;
// }
// catch(...)
// {
//     cout << "All";
// }
// catch(int x)
// {
//     cout << "Integer";
// }


// Q1. Will it compile?

// ❌ No

// Kyun?

// Kyuki:

// catch(...)

// Hamesha last me likha jata hai.

// Ye sabhi exceptions ko catch kar leta hai.

// Agar ise pehle likh doge, to:

// catch(int x)

// kabhi execute hi nahi hoga.

// Isliye compiler error de deta hai.

// ✅ Sahi Order
// try
// {
//     throw 10;
// }
// catch(int x)
// {
//     cout << "Integer";
// }
// catch(...)
// {
//     cout << "All";
// }

// Output:

// Integer
// ⭐ Golden Rule (Bahut Important)
// Specific catch blocks
//         ↓
// catch(...)

// ✅ catch(...) hamesha LAST me likhte hain.

// 🎯 Example
// try
// {
//     throw 'A';
// }
// catch(int x)
// {
//     cout << "Int";
// }
// catch(double x)
// {
//     cout << "Double";
// }
// catch(...)
// {
//     cout << "Any Exception";
// }

// Output:

// Any Exception

// Kyuki:

// int ❌
// double ❌
// catch(...) ✅