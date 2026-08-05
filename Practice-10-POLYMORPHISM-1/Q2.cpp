// 🎯 Placement Trap #1

// Ab dekhte hain compiler kitna smart hai.

#include<iostream>
using namespace std;

class Demo
{
public:

    void show(int a)
    {
        cout<<"Integer";
    }

    void show(double a)
    {
        cout<<"Double";
    }
};

int main()
{
    Demo d;

    d.show(10);

    cout<<endl;

    d.show(10.5);
}


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// Integer
// Double

// ✅ Correct.

// Q3.

// How does the compiler decide?

// Tumne likha:

// compiler didn't confused because the parameter types are different

// ✅ Correct.

// Placement answer:

// The compiler selects the overloaded function by matching the argument type with the function parameter type. Since 10 is an int, it calls show(int). Since 10.5 is a double, it calls show(double).

// 🧠 Function Signature

// Ab ek naya term.

// Interview me poochte hain:

// What is a function signature?

// Answer:

// A function signature consists of:

// Function name
// Number of parameters
// Type of parameters
// Order of parameters

// ⚠️ Return type is NOT part of the function signature.

// Ye bahut important interview point hai.