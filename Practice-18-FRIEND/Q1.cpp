// 📂 Friend Function

// ⭐⭐⭐⭐⭐ Placement Importance: Medium–High

// Sabse Pehle

// Question:

// class Student
// {
// private:
//     int marks = 90;
// };

// Question:

// Kya main() directly marks access kar sakta hai?

// Student s1;

// cout << s1.marks;

// 👉 Answer: No

// Kyuki:

// marks

// private hai.

// Problem

// Kabhi-kabhi hume class ke private data ko bahar se access karna padta hai.

// Normal function:

// void show()
// {
//     // Student ke private members access nahi kar sakta
// }

// ❌ Error.

// Solution → Friend Function
// class Student
// {
// private:
//     int marks = 90;

//     friend void display(Student);
// };

// Ab:

// void display(Student s)
// {
//     cout << s.marks;
// }

// ✅ display() private member ko access kar sakta hai.

// ⭐ Golden Rule

// Friend Function class ka member function nahi hota, lekin usse class ke private aur protected members ko access karne ki permission hoti hai.

// Syntax
// class Student
// {
// private:
//     int marks = 90;

//     friend void display(Student);
// };

// Yahan:

// friend

// ek permission keyword hai.