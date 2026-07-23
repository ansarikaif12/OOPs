// 🚀 Next Level (Question 14)
// Ab difficulty badhegi.
// Constructor Overloading
// Write a C++ program that satisfies the following:
// Create a class Employee.
// Data Members:
// id
// name
// Create two constructors:
// Default Constructor
// id = 0
// name = "Unknown"
// Parameterized Constructor
// Takes id and name.

// Create a display() function.

// In main():

// Create one object using the default constructor.
// Create another object using the parameterized constructor.
// Display both objects.
// Rules
// ❌ No hints.
// ❌ No user input.

// 📌 Difficulty: ⭐⭐⭐⭐☆

// This is your first Constructor Overloading question. It's asked very frequently in placement interviews.

#include<iostream>
using namespace std;

class Employee{
    int id;
    string name;
    public:
    Employee(){
        id=0;
        name="Unknown";
    }

    Employee(int id, string name){
        this->id=id;
        this->name=name;
    }

    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main(){
    Employee e1;
    Employee e2(79,"Kaif");
    e1.display();
    e2.display();
    return 0;
 }



// Interview Questions
// Q1. Constructor Overloading kya hoti hai?

// Answer:

// Jab ek hi class me multiple constructors hote hain, lekin unke parameters alag hote hain, use Constructor Overloading kehte hain.

// Q2. Compiler kaise decide karta hai kaunsa constructor call karna hai?

// Answer:

// Object create karte waqt diye gaye arguments ke basis par compiler matching constructor choose karta hai.

// Example:

// Employee e1;          // Default constructor
// Employee e2(79,"Kaif"); // Parameterized constructor
// Q3. this Pointer kya hai?

// Answer:

// this ek special pointer hai jo current object ko point karta hai.

// Example:

// this->id = id;

// Left side → class ka member

// Right side → constructor ka parameter

// Small Professional Improvement

// Tum future me constructor ko initializer list se bhi likh sakte ho:

// Employee(int id, string name)
//     : id(id), name(name)
// {
// }

// Ye zyada efficient mana jata hai, especially jab data members complex types ya const/references hon. Abhi ke level ke liye tumhara current code bilkul sahi hai.

// EXAMPLE:


class Employee
{
    int id;
    string name;

public:
    // Default Constructor
    Employee() : id(0), name("Unknown")
    {
    }

    // Parameterized Constructor
    Employee(int id, string name) : id(id), name(name)
    {
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Employee e1;
    Employee e2(79, "Kaif");

    e1.display();
    cout << endl;
    e2.display();

    return 0;
}


// Interview Question

// Interviewer: Agar dono same kaam karte hain, to initializer list kyun use karte hain?

// Answer:

// Ye more efficient hoti hai kyunki data members directly initialize hote hain.
// const members aur reference members ke liye initializer list mandatory hoti hai.
// Professional C++ code me isi ko prefer kiya jata hai.