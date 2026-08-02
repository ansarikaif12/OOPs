// 💻 Practice 05 (🟢 Easy)

// Create two classes:

// Person
// Private:
// string name
// Public:
// Constructor
// displayName()
// Student
// Publicly inherit from Person
// Private:
// int rollNo
// Public:
// Constructor
// displayStudent()
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
    Person(string n): name(n){

    }

    void displayName(){
        cout<<"Name: "<<name<<endl;
    }
};

class Student: public Person{
    int rollNo;
    public:
    Student(int rN,string n):Person(n),rollNo(rN){

    }

    void displayStudent(){
        cout<<"Roll Number: "<<rollNo<<endl;
    }
};

int main(){
    Student s1(21,"Kaif");
    s1.displayName();
    s1.displayStudent();
}




// 🧠 Bahut Important Rule

// Ye diagram yaad rakhna.

//                 Person
//      --------------------------
//      private: name
//      public:
//         displayName()   ✅ Can access name
//      --------------------------
//               ↑
//               |
//             Student
//      --------------------------
//      displayStudent() ❌ Cannot access name directly