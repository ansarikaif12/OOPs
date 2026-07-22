// POLYMORPHISM IN C++:
    // 1)similar to polymorphism in life
    // 2)polymorphism=many forms (Poly=Many, Morphism=Form).
    // 3)the ability of a single function or operator to work in different ways based on the object it is acting upon or actul need.
    // 4)a phenomenon that allows an object to have several different forms and behaviours.
    // 5)Type:
        // i)Compile time polymorphism(Static).
        // ii)Runtime Polymorphism(Dynamic).

// STATIC POLYMORPHISM----------:
// 1) Aka, Compile Time Polymorphism.
// 2)Types:
    // i)Functions Overloading 
    // ii)Operator Overloading 


// 1)COMPILE TIME POLYMORPHISM(STATIC): 1)FUNCTION OVERLOADING-------:
// i)Overloading occurs when a class contains multiple methods sharing a name but different in argument count or argument type.

// #include<iostream>
// using namespace std;

// class Add{
//     public:

//     // x,y add two int
//     int sum(int x,int y){
//         cout<<"Sum of two int: "<<endl;
//         return x+y;
//     }

//     // x,y,z add three int
//     int sum(int x,int y, int z){
//         cout<<"Sum of three int: "<<endl;
//         return x+y+z;
//     }

//     // double add
//     double sum(double x,double y){
//         cout<<"Sum of two double: "<<endl;
//         return x+y;
//     }
// };

// int main(){
//     int x=5,y=5;
//     int z=2;

//     Add add;
//     cout<<add.sum(x,5)<<endl;
//     cout<<add.sum(5,5,z)<<endl;
//     cout<<add.sum(5.4,2.7)<<endl;
// }

// IMPORTANT NOTE: WHEN WE DO 5.4+2.6 should be 8.0 but it will shown 8 because cout will not shown trailing zeros or unnecessary zeros.


// 1)COMPILE TIME POLYMORPHISM(STATIC): ii)OPERATOR OVERLOADING-------:
// In c++, when operators are overloaded, they executed user-defined fucntions whenever used, allowing for customised behaviour.

#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int img;

    // Default constructor
    Complex() {
        real = img = 0;
    }

    // Parameterized constructor
    Complex(int r, int i) : real(r), img(i) {}

    // Operator overloading for +
    // Syntax
    // Ret_type operator <operator_name> (args){
    //     // something
    //     return <>
    // }

    Complex operator+(const Complex &B){
        //here 'this' point to A
        Complex temp;
        temp.real=this->real+B.real;
        temp.img=this->img+B.img;

        return temp;
    }

    Complex operator-(const Complex &B){
        //here 'this' point to A
        Complex temp;
        temp.real=this->real-B.real;
        temp.img=this->img-B.img;

        return temp;
    }

    bool operator==(const Complex &B){
        return (this->real == B.real) && (this->img == B.img);
    }


    
    void print() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex A(3, 3);
    Complex B(3, 3);

    Complex C = A + B;   // Calls operator+ (yaha c1 keh rha hai ki mjhe c2 ke sath + kr do)

    Complex D = A - B;
    cout << "First Complex Number: ";
    A.print();

    cout << "Second Complex Number: ";
    B.print();

    cout << "Sum: ";
    C.print();

    cout<< "Difference: ";
    D.print();

    bool a=A==B;
    cout<<a<<endl;
    return 0;
}
