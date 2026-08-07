// 🎯 Placement Question 1

// Predict the output.

#include<iostream>
using namespace std;

class Student
{
private:
    int marks = 95;

    friend void show(Student);
};

void show(Student s)
{
    cout << s.marks;
}

int main()
{
    Student s1;

    show(s1);
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// 95

// ✅ Correct.

// Q3. Why?

// Tumne likha:

// because friend member give the special permission to access the private members

// ✅ Concept bilkul sahi hai.

// Interview me is tarah bolna:

// A friend function is not a member of the class, but it is granted special permission by the class to access its private and protected members.

// Ya Hindi me:

// Friend function class ka member nahi hota, lekin friend keyword ki wajah se usse class ke private aur protected members access karne ki permission mil jaati hai.

// ⭐ Interview Trap
// class Student
// {
// private:
//     int marks = 90;

//     friend void show(Student);
// };
// Question:

// Kya show() ko object ke through call kar sakte hain?

// Student s1;

// s1.show();    // ?

// Options:

// A. Yes

// B. No

// Aur reason bhi batana.

// Tumhara answer bilkul sahi hai.

// Friend function class ka member function nahi hota. Isliye usse object ke through (s1.show()) call nahi kar sakte. Usse normal function ki tarah call karte hain.

// Example:

// ✅ Correct

// show(s1);

// ❌ Wrong

// s1.show();