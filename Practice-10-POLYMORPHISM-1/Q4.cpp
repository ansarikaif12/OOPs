// 💻 Practice 3 ⭐⭐⭐⭐☆ (Placement Trap)

// Predict whether this compiles.

#include<iostream>
using namespace std;

class Demo
{
public:

    void show(int a, double b)
    {
        cout << "First";
    }

    void show(double a, int b)
    {
        cout << "Second";
    }
};

int main()
{
    Demo d;

    d.show(10, 20.5);

    cout << endl;

    d.show(10.5, 20);
}


// 📌 Small Suggestion

// Ek notebook me "Placement Traps" naam ka section bana lo.

// Usme ye likho:

// ❌ Return type se overloading nahi hoti.
// ✅ Number of parameters se hoti hai.
// ✅ Parameter types se hoti hai.
// ✅ Parameter order se hoti hai.

// Ye 4 points interview me bahut kaam aayenge.


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// First
// Second

// ✅ Correct.

// Q3.

// Why?

// Tumne likha:

// because of data types of parameters and orders of parameters are different

// ✅ 100% Correct.

// Placement answer:

// The compiler matches both the parameter types and their order with the arguments passed during the function call. Since the signatures are different, the compiler selects the correct overloaded function.

// 🧠 Interview Tip

// Ab tak compiler ka function selection rule tumhe aa gaya hai.

// Compiler check karta hai:

// ✅ Function Name
// ✅ Number of Parameters
// ✅ Parameter Types
// ✅ Parameter Order

// Return Type ❌ ignore karta hai.