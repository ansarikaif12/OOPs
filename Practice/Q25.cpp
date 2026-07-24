// Question 23 (Placement Level)
// A company wants every employee to have a unique ID.
// If an employee resigns (object is destroyed), the active employee count should decrease.
// However, the next employee who joins should still get a new unique ID, not reuse the old one.
// main() (Do not modify)
// int main()
// {
//     Employee e1("Kaif");
//     {
//         Employee e2("Aman");
//         Employee e3("Ali");
//         Employee::showActiveEmployees();
//     }
//     Employee e4("Sara");
//     Employee::showActiveEmployees();
//     return 0;
// }
// Rules
// ❌ No hints.
// ❌ No explanation.
// ❌ Do not modify main().
// ❌ Do not take ID from the user.
// ✅ Write the complete class.

// 📌 This is an actual placement-style question.

// After this question, we'll stop coding and have a 10-minute interview round only on Static, where I'll ask theory, output, and tricky questions just like an interviewer would.
#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;

    static int nextId;
    static int activeEmployees;

public:
    Employee(string name)
    {
        this->name = name;
        id = nextId;
        nextId++;
        activeEmployees++;
    }

    ~Employee()
    {
        activeEmployees--;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }

    static void showActiveEmployees()
    {
        cout << "Active Employees: " << activeEmployees << endl;
    }
};

int Employee::nextId = 1;
int Employee::activeEmployees = 0;

int main()
{
    Employee e1("Kaif");

    {
        Employee e2("Aman");
        Employee e3("Ali");

        Employee::showActiveEmployees();
    }

    Employee e4("Sara");

    Employee::showActiveEmployees();

    return 0;
}


// 🎯 Placement Lesson

// Ye question sirf static ka nahi tha.

// Ye test karta tha ki tum Software Design samajhte ho ya nahi.

// Interviewer isi point par follow-up poochta:

// "Can one variable have two responsibilities?"

// Correct answer:

// No. One variable should represent one responsibility.



// Interview Review
// Question 2

// Can a static member function access non-static data members directly? Why?

// Tumhara Answer

// "No, because static member function doesn't have this pointer for non static data member."



// 🎯 Follow-up Question (Jo interviewer pooch sakta hai)
// class Student
// {
//     int age;

// public:
//     static void fun(Student &s)
//     {
//         cout << s.age;
//     }
// };
// Question:

// Ab kya ye code chalega?

// Yes / No + Reason.

// The correct answer is ✅ Yes, it will compile and run.

// Why?

// Static member function directly non-static members ko access nahi kar sakta, kyunki uske paas this pointer nahi hota.

// Lekin agar tum usse kisi object ka reference ya pointer de do, to woh us object ke non-static members ko access kar sakta hai.

// Example:

// class Student
// {
//     int age = 21;

// public:
//     static void fun(Student &s)
//     {
//         cout << s.age;
//     }
// };

// int main()
// {
//     Student s;
//     Student::fun(s);
// }

// ✅ Output:

// 21
// Interview Trick

// Interviewer aksar poochta hai:

// Can a static member function access non-static members?

// Best answer:

// "It cannot access them directly because it has no this pointer. However, it can access them through an object, object reference, or object pointer passed as a parameter."


// Question 3

// Why do we define a static data member outside the class?

// Tumhara Answer (Summary)

// "Static data member needs memory. Inside the class we declare it, but memory is not assigned there. So we define it outside the class to allocate memory."

// ⭐ Score: 9.5/10 ✅

// Concept bilkul sahi hai.


// Question 4

// Can a constructor be static? Why?

// "No. Constructors cannot be static because they are responsible for creating and initializing objects, while static members are associated with the class, not any particular object."


// Question 5

// Can a destructor be static? Why?

// Tumhara Answer

// "No, Destructor cannot be static because they are responsible for destroy the objects when the lifetime of objects is over, a static member belongs to the class and does not require an object, whereas a destructor exists specifically to destroy an object."


// 🎤 Q6

// What is a static local variable?

// Interview-style answer do (2–4 lines). Include:

// Kab banta hai?
// Kitni baar banta hai?
// Uski value ka kya hota hai function calls ke beech?

// 🎤 Interview Answer

// A static local variable is a local variable declared with the static keyword inside a function. It is created only once, and its value is retained between function calls. Although its scope is limited to the function, its lifetime lasts until the program ends.

// Hinglish Explanation

// Normal local variable:

// void fun()
// {
//     int x = 0;
//     x++;
//     cout << x << endl;
// }

// Har baar fun() call hoga:

// x dobara banega.
// Value phir 0 se start hogi.

// Output:

// 1
// 1
// 1

// Static local variable:

// void fun()
// {
//     static int x = 0;
//     x++;
//     cout << x << endl;
// }

// Pehli call:

// x = 1

// Dusri call:

// x = 2

// Teesri call:

// x = 3

// Output:

// 1
// 2
// 3