// Next Question (Difficulty ⭐⭐☆☆☆)

// Ab thoda aur interesting.

// Create a class named Circle.

// Requirements:

// Data member:
// radius
// Member Functions:
// input()
// area()
// circumference()

// In main():

// Create one object.
// Call all the functions.
// Output Example
// Area = 78.5
// Circumference = 31.4
// Rules
// ❌ No constructor
// ❌ No hints
// ❌ No global variables

// Send only your code.


#include<iostream>
#include<string>
using namespace std;


class Circle{
    float radius;

    public:
    void input(){
        cout<<"Enter the input of Circle: "<<endl;
        cin>>radius;
    }
    void area(){
        cout<<"Area = "<<3.14*radius*radius<<endl;
    }
    void circumference(){
        cout<<"Circumference = "<<2*3.14*radius<<endl;
    }
};
int main(){
    Circle c1;
    c1.input();
    c1.area();
    c1.circumference();
}