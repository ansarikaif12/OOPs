<!-- Exception Handling

⭐⭐⭐⭐⭐ Placement Importance: Very High

Ye topic TCS, Cognizant, Accenture, Capgemini, Wipro aur product companies me bhi poocha jata hai.

Sabse pehle samajho Exception kya hota hai?

Normal program:

10 / 2

Output:

5

Sab sahi.

Lekin agar:

10 / 0

Kya hoga?

❌ Error.

Program crash ho sakta hai.

Is type ki unexpected error ko Exception kehte hain.

Real Life Example

Socho ATM se ₹1000 nikalne gaye.

Tumhare account me sirf ₹500 hain.

ATM kya karta hai?

❌ Crash nahi hota.

Bas message deta hai:

Insufficient Balance

Program continue karta hai.

Ye hi Exception Handling hai.

Definition (Interview)

Exception Handling is a mechanism to detect and handle runtime errors so that the program does not terminate abnormally.

Hindi me

Runtime par aane wali errors ko handle karna taaki program crash na ho, ise Exception Handling kehte hain.

C++ me 3 Keywords hote hain
1. try

Risky code yahan likhte hain.

try
{
    // risky code
}
2. throw

Exception throw karta hai.

throw "Error";
3. catch

Exception ko handle karta hai.

catch(...)
{
    // handle error
}
Flow
try
   ↓
Exception?
   ↓
throw
   ↓
catch
First Program
#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 10;
    }
    catch(int x)
    {
        cout << x;
    }
}
🎯 Placement Question 1
Questions
Q1.

Will it compile?

Q2.

Output?

Q3.

throw 10; me 10 ka data type kya hai?

A. float

B. int

C. char

D. string

Q4.

catch(int x) kab execute hoga?

❌ No hints. -->

<!-- 
Step 1: try kya hota hai?

try block me wo code likhte hain jisme error aane ki possibility ho.

Example:

try
{
    cout << "Hello";
}

Yahan koi error nahi hai, isliye program normally chalega.

Step 2: throw kya hota hai?

throw ka matlab hai:

"Maine ek exception (error) bhej di."

Example:

throw 10;

Yahan 10 koi output nahi hai.

Ye exception hai jo compiler ko bheji ja rahi hai.

Jaise teacher class me bole:

"Kaif, bahar jao."

Waise hi:

throw 10;

matlab program bol raha hai:

"Mere paas ek exception hai."

Step 3: catch kya hota hai?

catch us exception ko receive karta hai.

Example:

catch(int x)
{
    cout << x;
}

Agar kisi ne:

throw 10;

kiya hai, to

x = 10

ho jayega.

Fir:

cout << x;

print karega:

10
Ab poora program dekho
#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 10;
    }
    catch(int x)
    {
        cout << x;
    }
}
Execution
Step 1

Program aaya:

try

Andar gaya.

Step 2

Mila:

throw 10;

Matlab:

"Exception aa gayi."

Program turant try block se bahar nikal gaya.

Step 3

Compiler dekhta hai:

catch(int x)

Exception bhi int hai.

To:

x = 10;
Step 4
cout << x;

Output:

10
Memory Visualization
try
 │
 │ throw 10
 ▼
catch(int x)
      │
      ▼
    x = 10
      │
      ▼
   print 10
Ab Questions
Q1. Will it compile?

✅ Yes

Q2. Output?

✅ 10

Q3. throw 10 me 10 ka data type?

✅ int

Q4. catch(int x) kab chalega?

✅ Jab try block me int type ka exception throw hoga.

⭐ Golden Rule
try   → Risky Code

throw → Exception bhejna

catch → Exception handle karna -->