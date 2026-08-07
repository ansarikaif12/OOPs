// Next Question ⭐⭐⭐⭐☆

// Predict the output:

#include<iostream>
using namespace std;

class Student
{
public:
    int age;

    void setAge(int age)
    {
        this->age = age;
    }

    void show()
    {
        cout << age;
    }
};

int main()
{
    Student s1;

    s1.setAge(25);

    s1.show();
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// 25

// ✅ Correct.

// Q3. this kis object ko point kar raha hai?

// Tumne likha:

// this s1 object ko point kr rha hai

// ✅ Bilkul sahi.

// Yaad rakhne wali line:

// Jis object se function call hota hai, this usi object ko point karta hai.

// Example:

// Student s1;
// Student s2;

// s1.setAge(25);

// Yahan:

// this -----> s1

// Aur agar:

// s2.setAge(30);

// To:

// this -----> s2