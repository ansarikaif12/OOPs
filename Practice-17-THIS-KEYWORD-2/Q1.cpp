// Method Chaining (return *this)

// ⭐⭐⭐⭐⭐ Placement Importance: High

// Pehle code dekho
#include<iostream>
using namespace std;

class Student
{
public:
    int age;

    Student& setAge(int age)
    {
        this->age = age;
        return *this;
    }

    void show()
    {
        cout << age << endl;
    }
};

int main()
{
    Student s1;

    s1.setAge(20).show();
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// 20
// Q3. *this ka type kya hai?

// Options:

// A. Student

// B. Student&

// C. Student*

// D. int

// ✅ Answer: B. Student&

// Kyun?
// this ka type hota hai:
// Student*
// *this ka matlab pointer ko dereference karna.

// Isliye:

// *this

// ban gaya:

// Student

// Aur function return type hai:

// Student&

// To *this ko reference ke roop me return kiya ja raha hai.

// Q4. return *this kyu?

// Taaki hum method chaining kar sake.

// Example:

// s1.setAge(20).show();

// Yahan kya hua?

// Step 1
// s1.setAge(20)

// Ye return karta hai:

// Student&

// Matlab fir se s1 hi mil gaya.

// Step 2

// Ab compiler ke paas fir s1 aa gaya.

// To:

// .show();

// call ho gaya.

// Yaani internally:

// s1.show();
// ⭐ Real World Example

// Yehi concept tumne pehle bhi use kiya hai:

// cout << "Hello" << endl;

// Actually ye bhi method chaining ka example hai.

// Aur STL me bhi:

// cin >> a >> b >> c;

// Ye bhi chaining ka hi concept use karta hai.

// 🎯 Golden Rule
// this      → Pointer to current object
// *this     → Current object
// return *this → Current object ko reference ke form me return karta hai