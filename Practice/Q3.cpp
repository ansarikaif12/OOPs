#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int roll;
    int marks;

public:
    Student(string n, int r, int m)
    {
        cout << "Parameterized Constructor Called" << endl;
        this->name = n; // here this is a pointer that points the current object
        this->roll = r;
        this->marks = m;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1("Kaif", 101, 89.5);
    s1.display();
    Student s2("Aman", 102, 92.0);
    s2.display();
}