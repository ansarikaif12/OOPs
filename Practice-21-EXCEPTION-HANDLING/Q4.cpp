// 🎯 Interview Trick

// Agar ye code ho:

// try
// {
//     throw 3.14;
// }
// catch(int x)
// {
//     cout << "Int";
// }
// catch(double x)
// {
//     cout << "Double";
// }
// catch(char x)
// {
//     cout << "Char";
// }


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// Double
// Q3. Kaunsa catch execute hoga?

// ✅ catch(double x)

// Reason:

// throw 3.14;

// 3.14 ka type double hai.

// Compiler pehle check karega:

// catch(int x)      ❌

// Match nahi hua.

// Fir:

// catch(double x)   ✅

// Match ho gaya.

// Uske baad baaki catch blocks check hi nahi hote.

// ⭐ Golden Rule
// Compiler catches the FIRST matching catch block.

// Yaad rakhna:

// throw int    → catch(int)

// throw char   → catch(char)

// throw double → catch(double)

// Type matching exact hoti hai.