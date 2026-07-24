// 📘 Topic: Static Data Members
// Pehle 2-minute Theory (Interview ke liye)
// 🤔 Static Data Member kya hota hai?

// Normally, har object ke paas apni alag copy hoti hai.

// Example:

// class Student
// {
//     int rollNo;
// };

// Agar 3 objects banaye:

// Student s1;
// Student s2;
// Student s3;

// To memory me:

// s1 → rollNo
// s2 → rollNo
// s3 → rollNo

// 👉 Matlab 3 alag copies.

// Ab Static Member
// class Student
// {
//     static int count;
// };

// Agar 100 objects bhi bana do:

// Student::count

// Bas ek hi copy hogi.

// Sab objects usi ko share karenge.

// Isliye static members ko use karte hain:
// Number of objects count karna
// Company employees count karna
// Total students count karna
// Shared data store karna
// Placement Interview Question

// Q: Static data member kiski property hoti hai?

// A. Object ki

// B. Class ki

// 👉 Answer: Class ki.

// 🔥 Question 19 (Level 1)

// Write a C++ program.

// Create a class Student.

// Data Members
// string name;
// int rollNo;
// static int count;
// Requirements
// Create a parameterized constructor.
// Har baar object create ho, count increase hona chahiye.
// Create display() function.
// Create static function showCount().
// main()

// Create these objects:

// Student s1("Kaif",101);
// Student s2("Aman",102);
// Student s3("Ali",103);

// Then:

// Display all students.
// Print total students using:
// Student::showCount();
// Rules
// ❌ No hints.
// ❌ No user input.
// ✅ Parameterized constructor.
// ✅ Static data member.
// ✅ Static member function.
// ✅ Define the static variable outside the class.
#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;
    static int count;

public:
    Student(string n, int r)
    {
        name = n;
        roll = r;
        count++;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }

    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1("Kaif", 101);
    Student s2("Aman", 102);
    Student s3("Ali", 103);

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}

// 🎤 Q1. Static data member kiski property hoti hai?

// Tumhara Answer: Class ki ✅

// 100% Correct.

// Isliye hum use aise access kar sakte hain:

// Student::count
// 🎤 Q2. Static variable ko class ke bahar define kyu karte hain?

// Tumhara Answer: Compile nahi hoga.

// ✅ Ye practical answer sahi hai, lekin interviewer reason poochega.

// Interview Answer:

// "Static data member sirf class ke andar declare hota hai. Uske liye actual memory allocate karne ke liye class ke bahar define karna padta hai."

// Example:

// class Student
// {
//     static int count;   // Declaration
// };

// int Student::count = 0; // Definition + Memory Allocation

// Yaad rakho:

// Inside class → Declaration
// Outside class → Definition + Memory Allocation
// 🎤 Q3. Kya static function non-static members ko directly access kar sakta hai?

// Tumhara Answer: Pata nahi.

// Answer: ❌ Nahi.

// Example:

// class Student
// {
//     string name;
//     static int count;

// public:
//     static void show()
//     {
//         cout << name;   // ❌ Error
//     }
// };
// Kyun?

// Static function ke paas koi object (this pointer) nahi hota.

// name aur roll har object ke alag hote hain.

// Static function ko ye nahi pata ki kis object ka name print karna hai.

// Lekin:

// cout << count;

// ✅ Ye chalega, kyunki count sirf ek hi hai aur class ka member hai.

// Ek Line Trick (Placement)

// Static function can directly access only static members because it does not have a this pointer.

// Ye line yaad kar lo. Interview me bahut kaam aati hai.



// 🎤 Placement Interview Round
// Q1.

// Kya ye valid hai?

// s1.showCount();

// 👉 Answer: Haan, valid hai.

// Lekin recommended nahi hai.

// Kyun?

// Kyuki showCount() class ka function hai, kisi ek object ka nahi. Isliye class name se call karna zyada clear aur professional hota hai.

// Isliye best practice:

// Student::showCount();
// Q2.

// Agar count se static hata dein to kya hoga?

// int count;

// To har object ki apni alag count copy hogi.

// Example:

// Student s1;
// Student s2;
// Student s3;

// Memory:

// s1 → count = 1
// s2 → count = 1
// s3 → count = 1

// Tum kabhi bhi Total Students = 3 nahi nikal paoge.

// Isi liye count ko static banaya jata hai.

// 🧠 Interview Trick (Bahut Important)

// Agar interviewer pooche:

// Why do we use static data members?

// Tum confidently bol sakte ho:

// "Static data members are used to maintain a single shared value for all objects of a class. Only one copy exists in memory."

// Ye answer placement level ka hai. ✅





// 📌 Static Data Member Summary (Placement Notes)
// Rule 1

// Non-static members → Har object ki alag copy.

// int roll;
// string name;
// Rule 2

// Static members → Sirf ek copy, sab objects share karte hain.

// static int count;
// Rule 3

// Static variable ko class ke bahar define karna padta hai.

// int Student::count = 0;
// Rule 4

// Static function object ke bina bhi call ho sakta hai.

// Student::showCount();
// Rule 5

// Static function non-static members ko directly access nahi kar sakta.

// ❌ Wrong:

// cout << name;

// ✅ Correct:

// cout << count;
// 🧠 Placement Interview Tip

// Agar interviewer bole:

// "Can a static member function access non-static data members?"

// Tum answer dena:

// "No. A static member function does not have a this pointer, so it cannot directly access non-static data members. It can only directly access static members."

// Ye answer interview level ka hai. 💯