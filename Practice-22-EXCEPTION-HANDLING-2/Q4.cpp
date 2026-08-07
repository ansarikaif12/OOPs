// 🎯 Placement Question

// Predict the output:

#include<iostream>
using namespace std;

void login(bool ok)
{
    if(!ok)
        throw "Invalid Password";

    cout << "Login Successful" << endl;
}

int main()
{
    try
    {
        login(false);

        cout << "Welcome" << endl;
    }
    catch(const char* msg)
    {
        cout << msg << endl;
    }

    cout << "Program End";
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// Invalid Password
// Program End
// Step-by-Step Execution
// Step 1
// login(false);

// Function call hua.

// Step 2

// ok = false

// Isliye condition:

// if(!ok)

// ban gayi:

// if(true)

// Aur execute hua:

// throw "Invalid Password";

// Exception throw ho gayi.

// Step 3

// Jaise hi exception throw hui:

// cout << "Login Successful";

// ❌ Skip ho gaya.

// Step 4

// Control seedha:

// catch(const char* msg)

// me aa gaya.

// Output:

// Invalid Password
// Step 5

// Ab dhyan do.

// Ye line:

// cout << "Welcome";

// ❌ Ye bhi skip ho gayi.

// Kyun?

// Kyuki login(false) se exception aayi aur try block ki baaki saari statements execute nahi hoti.

// Step 6

// catch khatam hua.

// Program normally continue hua.

// cout << "Program End";

// Output:

// Program End
// Final Output
// Invalid Password
// Program End
// ⭐ Golden Rule (Interview)
// Exception throw hote hi:

// ✔ Current function turant exit ho jata hai.
// ✔ try block ki baaki statements skip ho jaati hain.
// ✔ Control matching catch block me chala jata hai.
// ✔ catch ke baad program normal execution continue karta hai.





// Step 1

// Hum function call kar rahe hain:

// login(false);

// Matlab:

// ok = false;

// To function ke andar ye ho gaya:

// bool ok = false;
// Step 2

// Ab ye line execute hogi:

// if(!ok)

// Yahan ! ka matlab hota hai NOT (ulta kar do).

// Table yaad kar lo:

// !true  = false
// !false = true

// Hamare case me:

// ok = false

// To:

// !ok

// banega:

// !false

// Aur !false ka result hota hai:

// true

// Isliye:

// if(!ok)

// actually ban gaya:

// if(true)

// Aur agar if(true) hai to uske andar ka code chalega:

// throw "Invalid Password";
// Step 3

// Jaise hi:

// throw "Invalid Password";

// execute hua,

// program turant function se bahar aa gaya.

// Ye line:

// cout << "Login Successful";

// ❌ Kabhi execute hi nahi hogi.

// Step 4

// Program seedha catch me chala gaya:

// catch(const char* msg)
// {
//     cout << msg;
// }

// Output:

// Invalid Password
// Agar hum likhte:
// login(true);

// To:

// ok = true

// Ab:

// if(!ok)

// banega:

// if(!true)

// Result:

// if(false)

// To throw execute hi nahi hoga.

// Fir ye line chalegi:

// cout << "Login Successful";

// Output:

// Login Successful
// Welcome
// Program End