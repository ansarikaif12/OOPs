// 💻 Practice 03 (🟢 Easy → 🟡 Medium)

// (No hints as promised.)

// Create two classes:

// Shape
// Private:
// string color
// Public:
// Constructor
// displayColor()
// Rectangle
// Publicly inherit from Shape
// Private:
// int length
// int breadth
// Public:
// Constructor
// displayArea()
// main()

// Create one object and call all required functions.

#include<iostream>
using namespace std;

class Shape{
    string color;
    public:
    Shape(string c): color(c){

    }

    void displayColor(){
        cout<<"Display color: "<<color<<endl;
    }
};

class Rectangle: public Shape{
    int l;
    int b;
    public:
    Rectangle(string color,int l,int b): Shape(color),l(l),b(b){

    }

    void displayArea(){
        cout<<"Area : "<<l*b<<endl;
    }
};

int main(){
    Rectangle r1("Black",2,5);
    r1.displayColor();
    r1.displayArea();
}