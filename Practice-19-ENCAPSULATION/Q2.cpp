// 🎯 Placement Trap Question

// Predict the output.

#include<iostream>
using namespace std;

class Student
{
private:
    int marks = 100;

public:
    int getMarks()
    {
        return marks;
    }
};

int main()
{
    Student s1;

    cout << s1.getMarks() << endl;

    cout << s1.marks << endl;
}


// Q1. Will it compile?

// ❌ No

// Q2. Error kis line me hai?
// cout << s1.marks << endl;

// ✅ Isi line par compile-time error aayega.

// Q3. Why does getMarks() work but s1.marks does not?
// getMarks()
// cout << s1.getMarks();

// ✅ Ye chalega.

// Kyun?

// Kyuki getMarks() class ka public member function hai. Public function class ke andar hone ki wajah se private member marks ko access kar sakta hai.

// s1.marks
// cout << s1.marks;

// ❌ Error.

// Kyun?

// Kyuki marks private hai aur main() class ke bahar hai. Bahar se private members ko directly access nahi kar sakte.

// ⭐ Interview Question

// Q. Why do we use Encapsulation?

// Placement Answer

// Encapsulation is used to protect data from unauthorized access, improve data security, and provide controlled access through public member functions.

// ⭐ Golden Rule
// Private Data
//      ↓
// Public Getter / Setter
//      ↓
// Controlled Access