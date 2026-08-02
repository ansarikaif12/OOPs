// 💻 Practice 28 ⭐⭐⭐⭐☆ (Placement Level)
// Topic: Private Inheritance

// Create two classes.

// Person
// Public:
// showName()
// Protected:
// showAge()
// Student

// Privately inherit from Person.

// Public:
// test()
// Requirements

// Inside test():

// Call every function that is valid.
// main()

// Create one object.

// Call every function that is valid.

// Rules
// ❌ No hints
// ❌ No theory
// ❌ No syntax help

// 🎯 Difficulty: Cognizant / Capgemini Technical Interview

#include<iostream>
using namespace std;

class Person{
    public:
    void showName(){
        cout<<"Display name"<<endl;
    }

    protected:
    void showAge(){
        cout<<"Display age"<<endl;
    }
};

class Student: private Person{
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


// test()
// showName();
// showAge();

// ✔️ Dono valid hain.

// Reason:

// Private inheritance me:

// showName() (public) ➜ private ban jata hai.
// showAge() (protected) ➜ private ban jata hai.

// Lekin Student class ke andar dono accessible hote hain.


// 🎤 Placement Follow-up

// Ab interviewer ye poochega.

// Student s1;

// s1.showName();
// Questions
// Compile hoga?
// Reason?

// 🎤 Placement Ready Answer

// No. Due to private inheritance, the public member showName() of Person becomes a private member of Student. Private members cannot be accessed from outside the class using an object. Therefore, s1.showName() results in a compilation error.

// 🧠 Ab ek interview-level comparison karte hain.

// Ye table bahut important hai. Iske baad tum public/protected/private inheritance kabhi nahi bhoologe.

// Inheritance Type	obj.showName()	Inside Derived Class
// public	✅	✅
// protected	❌	✅
// private	❌	✅

// Ye table placement interviews me bahut kaam aata hai.