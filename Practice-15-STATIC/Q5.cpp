// Static Function

// ⭐⭐⭐⭐⭐ Placement Importance: High

// Sabse pehle Question
// Normal Function

#include<iostream>
using namespace std;

class Student
{
public:
    void show()
    {
        cout << "Hello";
    }
};

int main()
{
    Student s1;

    s1.show();
}

// Question:

// Kya object banana zaruri hai?

// 👉 Yes

// Kyuki ye normal member function hai.


// Static Function
// class Student
// {
// public:
//     static void show()
//     {
//         cout << "Hello";
//     }
// };

// Ab object ki zarurat nahi.

// Call directly:

// Student::show();
// ⭐ Golden Rule
// Normal Function
// Student s1;

// s1.show();

// ✅ Object required.

// Static Function
// Student::show();

// ✅ Object not required.

// Syntax
// class Student
// {
// public:
//     static void show()
//     {
//         cout << "Hello";
//     }
// };

// int main()
// {
//     Student::show();
// }

// Output:

// Hello