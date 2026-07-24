// 🚀 Question 22

// Write a C++ program.

// A company wants to keep track of currently active employees.

// Implement the solution using a class named Employee.

// main() (Do not modify)
// int main()
// {
//     Employee e1("Kaif");
//     Employee e2("Aman");

//     {
//         Employee e3("Ali");
//         Employee::showActiveEmployees();
//     }

//     Employee::showActiveEmployees();

//     return 0;
// }
// Rules
// ❌ No hints.
// ❌ Do not change main().
// ❌ Do not ask for expected output.
// ✅ Write the complete class yourself.


#include <iostream>
using namespace std;

class Employee
{
    string name;
    static int activeEmployees;

public:
    Employee(string n)
    {
        name = n;
        activeEmployees++;
    }

    ~Employee()
    {
        activeEmployees--;
    }

    void display()
    {
        cout << "Name: " << name << endl;
    }

    static void showActiveEmployees()
    {
        cout << "Active Employees: " << activeEmployees << endl;
    }
};

int Employee::activeEmployees = 0;

int main()
{
    Employee e1("Kaif");
    Employee e2("Aman");

    {
        Employee e3("Ali");
        Employee::showActiveEmployees();
    }

    Employee::showActiveEmployees();

    return 0;
}




// 🎤 Interview Review
// Q1. Destructor kab call hota hai?
// Tumhara Answer:

// "Jab koi bhi object na bache to destructor call hota hai."

// 🟡 Score: 7/10

// Ye partially correct hai.

// Better answer:

// Destructor automatically call hota hai jab object ka lifetime khatam hota hai.

// Examples:

// Local object → Scope se bahar nikalte hi.
// Function object → Function return hote hi.
// Dynamically allocated object (new) → delete karne par.

// ⚠️ Zaroori nahi ki "jab koi bhi object na bache". Agar 10 objects hain aur ek scope khatam hua, to us scope ka object turant destroy ho jayega.

// Q2. Destructor sabse pehle kis object ka chalega?
// Tumhara Answer:

// e3 → e2 → e1

// ✅ Score: 10/10

// Bilkul sahi.

// Reason:

// Objects LIFO (Last In, First Out) order me destroy hote hain.

// Q3. Kya static data member ko private rakh sakte hain?
// Tumhara Answer:

// Yes, because static data member ko ham class ke andar access kr skte hai.

// 🟡 Score: 8/10

// "Yes" sahi hai. 👍

// Reason aur better ho sakta tha.

// Interview answer:

// Yes. Static data members can be private. They follow the same access control rules as normal data members. They can be accessed through public member functions or friend functions.

// Q4. Static keyword ke kitne uses hain C++ me?
// Tumhara Answer:

// Don't know.

// ❌ Score: 0/10

// Ye bahut important interview question hai.

// Yaad kar lo:

// static ke 4 common uses hain:

// Static Data Member (Class)
// Static Member Function (Class)
// Static Local Variable (Function)
// Static Global Variable / Static Function (File scope - internal linkage)

// Placements me pehle 3 sabse important hain.

// 💻 Output-Based Question

// Code:

// int Test::x = 5;

// Test t1;
// Test t2;

// Test::show();
// Tumhara Answer:

// 7

// ✅ Score: 10/10

// Reason:

// Initially:

// x = 5

// t1:

// x = 6

// t2:

// x = 7

// Output:

// 7