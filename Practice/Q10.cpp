// Next Topic: Member Functions

// Ab tak tum sirf data members use kar rahe the. Ab hum behavior add karenge. Yahi actual OOP ki shuruaat hai.

// Question 8 (Difficulty ⭐⭐☆☆☆)

// Write a C++ program that satisfies the following requirements:

// Create a class named Rectangle.
// Data members:
// length
// breadth
// Create a member function named input() to take input.
// Create a member function named area() to print the area.
// In main(), create one object and call both functions.
// Example

// Input

// 10
// 5

// Output

// Area = 50
// Rules
// ❌ No constructor
// ❌ No hints
// ❌ No global variables
// ❌ No extra functions outside the class
// ✅ Use member functions only.


#include<iostream>
#include<string>
using namespace std;

class Rectangle{
    int length;
    int breadth;
public:
    void input(){
        cout<<"Enter the input details of Rectangle: "<<endl;
        cin>>length>>breadth;
    }

    void area(){
        cout<<"Area = "<<length*breadth<<endl;
    }
};

int main(){
    Rectangle r1;
    r1.input();
    r1.area();
}



// 📌 Ek Important Concept

// Ab tak tumne pehli baar Encapsulation ka ek part use kiya hai, bina uska naam jaane.

// class Rectangle
// {
//     int length;
//     int breadth;

// public:
//     void input();
//     void area();
// };

// Yahan:

// Data (length, breadth)
// Functions (input(), area())

// Ek hi class ke andar hain.

// Isi ko OOP me Encapsulation kehte hain. Isko detail me baad me padhenge.