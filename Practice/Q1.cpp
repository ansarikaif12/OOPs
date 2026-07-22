#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int rollno;
    float marks;
    
    public:
    void input(){
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter roll number: ";
        cin>>rollno;
        cout<<"Enter marks: ";
        cin>>marks;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }   
};

int main(){
    Student s;
    s.input();
    s.display();
    return 0;
}