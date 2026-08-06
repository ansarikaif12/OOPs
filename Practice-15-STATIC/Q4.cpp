// 💻 Coding Time

// Ab tum likho.

// Question

// Create a class Employee.

// Requirements:

// static int totalEmployee
// Constructor me totalEmployee++
// display() function jo total employees print kare.
// main()
// Employee e1;
// Employee e2;
// Employee e3;

// e3.display();
// Expected Output
// Total Employees = 3

// ❌ Main code nahi dunga. Ab tum likho.


#include<iostream>
using namespace std;

class Employee
{
public:
    static int totalEmployee;

    Employee()
    {
        totalEmployee++;
    }

    void display()
    {
        cout << "Total Employees = " << totalEmployee << endl;
    }
};

int Employee::totalEmployee = 0;

int main()
{
    Employee e1;
    Employee e2;
    Employee e3;

    e3.display();

    return 0;
}


// Placement Questions
// Q1. display() ko kis object se call kiya?
// e3.display();
// Q2. Agar main likhun:
// e1.display();

// Output?

// 👉 Total Employees = 3

// Q3. Agar likhun:
// e2.display();

// Output?

// 👉 Total Employees = 3

// Kyun?

// Kyuki totalEmployee static hai.

// Ye e1, e2 ya e3 ka variable nahi hai.

// Ye poori class ka shared variable hai.

// Isliye chahe:

// e1.display();
// e2.display();
// e3.display();

// Teeno ka output hoga:

// Total Employees = 3
// ⭐ Golden Rule
// Normal Variable
// → Har object ki alag copy.

// Static Variable
// → Puri class ke liye sirf ek shared copy.