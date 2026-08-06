// 🎯 Placement Question 1
#include<iostream>
using namespace std;

class Student
{
public:
    static int count;
};

int Student::count = 100;

int main()
{
    Student s1;
    Student s2;

    cout << Student::count;
}



// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// 100

// ✅ Correct.

// Q3. How many copies of count are created?

// ✅ Only 1 copy

// Kyun?

// Kyuki count static data member hai.

// Chahe:

// Student s1;
// Student s2;
// Student s3;
// Student s4;
// Student s100;

// bana lo,

// count ki sirf ek hi shared copy memory me hoti hai.

// ⭐ Interview Tip

// Normal Member:

// class Student
// {
// public:
//     int marks;
// };
// 5 Objects
// ↓

// 5 Copies of marks

// Static Member:

// class Student
// {
// public:
//     static int count;
// };
// 5 Objects
// ↓

// 1 Copy of count
// 📌 Important Interview Question

// Q: Why do we write?

// int Student::count = 100;

// Answer:

// static data member kisi object ka nahi, balki poori class ka hota hai. Isliye iski memory har object ke saath alag-alag nahi banti. Iski sirf ek hi copy banti hai, jo class ke bahar allocate ki jaati hai. Is wajah se hume uski definition class ke bahar likhni padti hai.

// ⚠️ Ye line interview me bahut poochte hain.


// Example:

// class Student
// {
// public:
//     static int count;
// };

// Memory allocate hogi yahan:

// int Student::count = 100;
// Interview Question

// Q: Class ke andar hi initialize kyu nahi kar sakte?

// Answer (Placement):

// Kyuki class ke andar sirf declaration hoti hai. Static data member ki actual memory class ke bahar allocate hoti hai, isliye uski definition aur initialization bhi bahar karte hain.

// 📌 Ek line me yaad rakho:

// Normal variable → Object ke saath memory banti hai.
// Static variable → Class ke liye sirf ek baar memory banti hai.