// Question 12 (Constructor - Level 2)

// Write a C++ program that satisfies the following requirements:

// Create a class named Rectangle.
// Data members:
// length
// breadth
// Create a default constructor.
// The constructor should initialize:
// length = 10
// breadth = 5
// Create a member function area() to print the area.
// Create a member function perimeter() to print the perimeter.
// In main(), create one object and call both functions.
// Expected Output
// Area = 50
// Perimeter = 30
// Rules
// ❌ No user input.
// ❌ No parameterized constructor.
// ❌ No hints.

// Difficulty: ⭐⭐☆☆☆


#include<iostream>
using namespace std;


class Rectangle{
    int length;
    int breadth;

    public:

    Rectangle(){
        length=10;
        breadth=5;
    }

    void area(){
        cout<<"Area = "<<length*breadth<<endl;
    }

    void perimeter(){
        cout<<"Perimeter = "<<2*(length+breadth)<<endl;
    }
};

int main(){
    Rectangle r1;
    r1.area();
    r1.perimeter();
    return 0;
}   



// Interview Feedback

// Agar main interviewer hota, to main is code ke baad ye follow-up questions poochta:

// Q1.

// Constructor kitni baar call hoga?

// Rectangle r1;
// Rectangle r2;
// Rectangle r3;

// Answer:

// 3 baar. Har object banne par constructor ek baar automatically call hota hai.

// Q2.

// Agar constructor nahi likhenge to kya hoga?

// Answer:

// Compiler khud default constructor provide karta hai (jab tak tum koi constructor define nahi karte).

// Q3.

// Kya ek class me multiple constructors ho sakte hain?

// Answer:

// ✅ Haan. Isse Constructor Overloading kehte hain.