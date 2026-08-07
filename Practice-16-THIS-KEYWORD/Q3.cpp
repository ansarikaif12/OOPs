// 🎯 Placement Question

// Predict the output.

#include<iostream>
using namespace std;

class Student
{
public:
    int age;

    Student(int age)
    {
        this->age = age;
    }

    void show()
    {
        cout << age << endl;
    }
};

int main()
{
    Student s1(20);
    Student s2(30);

    s1.show();
    s2.show();
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// 20
// 30

// ✅ Correct.

// Q3. this kis object ko point karega?
// Student s1(20);

// ✅ this → s1

// Q4. this kis object ko point karega?
// Student s2(30);

// ✅ this → s2

// ⭐ Golden Rule
// this pointer always points to the current object.

// Hindi me:

// this pointer hamesha us object ko point karta hai jis object se member function call hua hai.