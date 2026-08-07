// 🎯 Placement Question 1

// Predict the output.

#include<iostream>
using namespace std;

class Demo
{
public:
    static void display()
    {
        cout << "Display Function";
    }
};

int main()
{
    Demo::display();
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// Display Function
// Q3. Why didn't we create an object?

// Tumne likha:

// because our function is static so it doesn't required the object

// ✅ Correct.

// Placement answer:

// Static function belongs to the class, not to any object. Therefore, it can be called directly using the class name (ClassName::functionName()).

// ⭐ Most Important Interview Rule

// Static Function can access only:

// ✅ Static Data Members
// ✅ Static Functions

// It cannot directly access:

// ❌ Non-static data members
// ❌ Non-static member functions