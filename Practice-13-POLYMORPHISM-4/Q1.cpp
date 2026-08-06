// 💻 Coding Time
// Practice 1 ⭐⭐⭐☆☆

// Question:

// Create an abstract class Shape.

// Requirements:

// virtual void area() = 0;

// Then create a child class:

// Rectangle

// Rectangle should:

// Have length and breadth
// Constructor to initialize them
// Override area()
// Print area
// Expected Output
// Area = 50
// Rules
// ❌ Main code nahi dunga.
// ✅ Tu complete code likhega.
// Main sirf review karunga aur interviewer ki tarah feedback dunga.


#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void area()=0;
};

class Rectangle: public Shape{
    int l,b;
    public:
    Rectangle(int l,int b):l(l),b(b){

    }

    void area(){
        cout<<"Area: "<<l*b<<endl;
    }
};

int main(){
    Rectangle r(5,10);
    r.area();
}


// 🎯 Placement Tip

// Agar interviewer bole:

// Can we create an object of Shape?

// Answer:

// ❌ No.

// Reason:

// Because Shape is an abstract class as it contains a pure virtual function.