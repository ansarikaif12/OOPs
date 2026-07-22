// Question 1

// Create a C++ program that satisfies the following:

// Define a class named Student.
// In main(), create one object of that class.
// Store a student's name and age in the object.
// Print both values.

// Expected Output:

// Name: Kaif
// Age: 21

#include<iostream>
using namespace std;


class Student{
    public:
    string name;
    int age;
};

int main(){
    Student s;

    s.name="Kaif Ansari";
    s.age=21;
    cout<<s.name<<endl;
    cout<<s.age<<endl;
}