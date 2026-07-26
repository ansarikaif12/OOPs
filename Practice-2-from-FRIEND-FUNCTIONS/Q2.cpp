// Coding Question 2

// Create a class Rectangle.

// Private data members:
// length
// breadth
// Create a constructor to initialize them.
// Declare a friend function named area.
// The friend function should calculate and display the area.
// Rules
// ❌ No getter functions.
// ❌ Don't make data members public.
// ✅ Use the friend function to access the private members.


#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;

    public:
    Rectangle(int l,int b): length(l), breadth(b){

    }

    friend void area(Rectangle);
};

void area(Rectangle r){
    cout<<"Area: "<<r.breadth*r.length<<endl;
}

int main(){
    Rectangle r1(12,4);

    area(r1);
}



// 🌟 Interview Feedback

// Agar interviewer pooche:

// Friend function ko object pass karna zaroori hai?

// Answer:

// Yes. Kyunki friend function ke paas this pointer nahi hota. Wo class ka member nahi hai, isliye object/reference/pointer ke through hi members access karega.


// Question:

// Can we declare the same function as a friend in multiple classes?

// A single function can be a friend of multiple classes.

// Example
// #include <iostream>
// using namespace std;

// class A;
// class B;

// class A
// {
// private:
//     int x = 10;

//     friend void display(A, B);
// };

// class B
// {
// private:
//     int y = 20;

//     friend void display(A, B);
// };

// void display(A a, B b)
// {
//     cout << a.x << " " << b.y;
// }

// int main()
// {
//     A a;
//     B b;

//     display(a, b);
// }
// Output
// 10 20
// Why?
// display() is not a member of either A or B.
// But both classes declare it as a friend.
// Therefore, it can access the private members of both classes.