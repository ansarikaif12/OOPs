// Question 3

// Ab next concept ki taraf badhte hain.

// Write a C++ program that satisfies the following:

// Create a class named Student.
// The class should contain:
// name
// rollNo
// Create three objects of the class.
// Take input for all three students.
// Print the details of the student whose roll number is the largest.

// Rules:

// ❌ No constructors.
// ❌ No member functions.
// ❌ No arrays.
// ❌ No loops.
// ✅ Use only if-else if needed.

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int roll;
};

int main()
{
    Student s1;
    Student s2;
    Student s3;

    cout << "Enter details of Student 1:" << endl;
    cin >> s1.name >> s1.roll;

    cout << "Enter details of Student 2:" << endl;
    cin >> s2.name >> s2.roll;

    cout << "Enter details of Student 3:" << endl;
    cin >> s3.name >> s3.roll;

    if (s1.roll > s2.roll && s1.roll > s3.roll)
    {
        cout << "\nStudent with Largest Roll Number:" << endl;
        cout << "Name: " << s1.name << endl;
        cout << "Roll No: " << s1.roll << endl;
    }
    else if (s2.roll > s1.roll && s2.roll > s3.roll)
    {
        cout << "\nStudent with Largest Roll Number:" << endl;
        cout << "Name: " << s2.name << endl;
        cout << "Roll No: " << s2.roll << endl;
    }
    else
    {
        cout << "\nStudent with Largest Roll Number:" << endl;
        cout << "Name: " << s3.name << endl;
        cout << "Roll No: " << s3.roll << endl;
    }

    return 0;
}