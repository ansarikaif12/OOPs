// 💻 Question 27 (⭐⭐⭐⭐☆ Placement Level)

// Topic: Protected Inheritance

// Create two classes.

// Person
// Public:
// showName()
// Protected:
// showAge()
// Student

// Protectedly inherit from Person.

// Public:
// test()
// Requirements

// Inside test():

// Call every function that is valid.

// Inside main():

// Create a Student object.
// Call every function that is valid.

// 🎯 Ye question Cognizant / Capgemini technical interview level ka hai.

// ❌ No hints.

// ❌ No syntax help.

// Paste the complete code. 💪

#include<iostream>
using namespace std;

class Person{
    public:
    void showName(){
        cout<<"Display Name"<<endl;
    }
    protected:
    void showAge(){
        cout<<"Display Age"<<endl;
    }

};  
class Student: protected Person{
    public: 
    void test(){
        showName();
        showAge();
    }
};

int main(){
    Student s1;
    s1.test();
}


// Reason:

// Student protectedly inherits Person.

// showName() (public) → becomes protected inside Student.
// showAge() (protected) → remains protected.

// Isliye test() ke andar dono accessible hain.


// Aur tumne ek aur important baat indirectly prove kar di:

// Tumne ye nahi likha:

// s1.showName();

// Kyuki protected inheritance me:

// showName()

// ab protected ban chuka hai.

// Isliye main() se access nahi hoga.

// 👏 Yehi main test karna chahta tha.