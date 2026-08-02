// 💻 Practice 02 (🟢 Easy)

// Create two classes:

// Person
// Private:
// string name
// Public:
// Constructor
// displayName()
// Teacher
// Publicly inherit from Person
// Private:
// string subject
// Public:
// Constructor
// displaySubject()
// main()

// Create one object and call both display functions.

// That's it.

// ❌ No hints.

// ❌ No expected output.

// ❌ No syntax help.


#include<iostream>
using namespace std;

class Person{
    string name;

    public:
    Person(string name): name(name){

    }

    void displayName(){
        cout<<"Name: "<<name<<endl;
    }
};

class Teacher: public Person{
    string subject;
    public:
    Teacher(string na,string sub): Person(na), subject(sub){

    }
    void displaySubject(){
        cout<<subject<<endl;
    }
};

int main(){
    Teacher t1("Kaif","Maths");
    t1.displayName();
    t1.displaySubject();
}