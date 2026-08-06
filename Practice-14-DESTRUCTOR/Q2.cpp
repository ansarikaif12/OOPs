// 💻 Coding Question 1 ⭐⭐☆☆☆

// Predict the output.

#include<iostream>
using namespace std;

class Student
{
public:

    Student()
    {
        cout<<"Constructor"<<endl;
    }

    ~Student()
    {
        cout<<"Destructor"<<endl;
    }
};

int main()
{
    Student s1;

    cout<<"Main Function"<<endl;
}


// Q1. Will it compile?

// Yes

// ✅ Correct.

// Q2. Output?
// Constructor
// Main Function
// Destructor

// ✅ Correct.

// Q3. Why?

// Tumne likha:

// destructor calls after main function because destructor called when the object destroy

// ✅ Correct.

// Placement answer:

// The destructor is automatically called when the object's lifetime ends. Here, s1 is a local object, so it is destroyed after the execution of main() finishes.

// ⭐ Interview Tip

// Ye line yaad kar lo:

// Constructor is called automatically when an object is created. Destructor is called automatically when an object is destroyed.