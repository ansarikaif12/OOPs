// 💻 Practice 07 (🟟 Medium)
// Scenario

// Create a class:

// University
// One function:
// showUniversity()
// Student

// Publicly inherit from University

// One function:
// showStudent()
// main()

// Create a Student object.

// Call both functions.

// ⚠️ That's all.

// (No data members.)

// 🎯 Concept Tested

// (Main nahi bataunga 😄)

// No hints.
// No expected output.
// No syntax help.

#include <iostream>
using namespace std;

class University
{
public:
    void showUniversity()
    {
        cout << "Welcome to University" << endl;
    }
};

class Student : public University
{
public:
    void showStudent()
    {
        cout << "Welcome Student" << endl;
    }
};

int main()
{
    Student s1;

    s1.showUniversity();
    s1.showStudent();

    return 0;
}