// 🎯 Placement Question 1

// Predict the output.

#include<iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    int getMarks()
    {
        return marks;
    }
};

int main()
{
    Student s1;

    s1.setMarks(95);

    cout << s1.getMarks();
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// 95

// ✅ Correct.

// Q3. Why can't we write?
// s1.marks = 95;

// Tumne likha:

// because we can't access the private members from outside the class

// ✅ Bilkul sahi.

// Placement answer:

// Because marks is declared as private. Private members cannot be accessed directly from outside the class. They can only be accessed through public member functions (getter/setter).