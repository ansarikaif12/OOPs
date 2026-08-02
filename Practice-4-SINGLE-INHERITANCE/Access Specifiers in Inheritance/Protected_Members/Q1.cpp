// Coding Practice 22

// No hints.

// Create two classes.

// Person
// Protected:
// string name
// Public:
// Constructor
// Student
// Publicly inherit from Person
// Public:
// Constructor
// displayName()
// main()

// Create one object and print the name using displayName().

// 🎯 Is question ka purpose

// Main dekhna chahta hoon ki tum protected ko practically samajhte ho ya nahi.

// ❌ No hints.

// ❌ No theory.

#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    public:
    Person(string name): name(name){

    }
};

class Student: public Person{
    public:
    Student(string name):Person(name){

    }

    void displayName(){
        cout<<name<<endl;
    }
};

int main(){
    Student s1("Kaif");
    s1.displayName();
}


// 📌 One-Line Rule

// Private:

// Accessible only inside the same class.

// Protected:

// Accessible inside the same class + derived classes, but not from outside through an object.
