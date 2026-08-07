// Module: this Pointer

// ⭐⭐⭐⭐⭐ Placement Importance: Very High

// Sabse Pehle

// Question:

// class Student
// {
// public:
//     int age;

//     void setAge(int age)
//     {
//         age = age;
//     }
// };

// Question:

// Student s1;

// s1.setAge(20);

// Ab batao,

// s1.age ki value kitni hogi?

// Options

// A. 20

// B. Garbage Value

// C. Compile Error

// D. 0


// Correct answer:

// ✅ B. Garbage Value (ya jo pehle se memory me ho, kyunki age initialize nahi hua.)

// Kyun?

// Code:

// class Student
// {
// public:
//     int age;

//     void setAge(int age)
//     {
//         age = age;
//     }
// };

// Yahan do age hain:

// Member variable:

// int age;

// Function parameter:

// void setAge(int age)

// Function ke andar:

// age = age;

// Dono taraf parameter age hi use ho raha hai.

// Matlab:

// parameter = parameter;

// Member variable age ko touch hi nahi kiya.

// Isliye:

// Student s1;
// s1.setAge(20);

// ke baad:

// s1.age

// ki value change nahi hogi. Wo uninitialized rahegi (garbage value).

// 💥 Isi problem ko solve karne ke liye this pointer use hota hai.
// void setAge(int age)
// {
//     this->age = age;
// }

// Ab:

// this->age → Member variable
// age → Function parameter

// Result:

// s1.age = 20;

// ✅ Ab value correctly assign ho jayegi.

// 🎯 Placement Trick

// Interviewer bahut baar ye puchta hai:

// age = age;

// Aur phir poochta hai:

// "What's wrong with this code?"

// Expected answer:

// Both age refer to the function parameter. To access the class data member, use this->age = age;.