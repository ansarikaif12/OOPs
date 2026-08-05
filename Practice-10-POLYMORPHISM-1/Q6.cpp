// 🎯 Placement Trap #5 (Very Common)

// Ab ye batao.

class Demo
{
public:

    void show()
    {
        cout << "No Parameter";
    }

    void show(int a = 10)
    {
        cout << "One Parameter";
    }
};

int main()
{
    Demo d;

    d.show();
}


// Ye Function Overloading ka sabse famous trap hai.

// Code
// void show()
// {
//     cout << "No Parameter";
// }

// void show(int a = 10)
// {
//     cout << "One Parameter";
// }

// Aur call:

// d.show();
// Kya hoga?

// Compiler sochega:

// Option 1
// show()

// ✅ Perfect match.

// Option 2
// show(int a = 10)

// ✅ Ye bhi valid hai, kyunki default argument ki wajah se bina argument ke call ho sakta hai.

// Ab compiler ke paas 2 valid options hain.

// show()        ✅
// show(int=10)  ✅

// Compiler decide nahi kar sakta.

// ❌ Ambiguity Error

// 🎯 Placement Ready Answer

// The call show() is ambiguous because both overloaded functions can be invoked without arguments. One function has no parameters, while the other has a default parameter. The compiler cannot determine which function to call.

// ⭐ Golden Rule

// Kabhi bhi aisa combination mat banana:

// show();
// show(int = 10);

// Ye ambiguity create karega.

// 📌 Ab tak ke Rules (Notebook me likho)
// ✅ Function Overloading Rules
// Rule 1

// ✔ Same function name

// Rule 2

// ✔ Different number of parameters

// Example:

// show(int)
// show(int, int)
// Rule 3

// ✔ Different parameter types

// show(int)
// show(double)
// Rule 4

// ✔ Different parameter order

// show(int, double)
// show(double, int)
// Rule 5

// ❌ Return type change karke overloading nahi hoti.

// int show(int);
// double show(int);   // Error
// Rule 6

// ❌ Default arguments se ambiguity create ho sakti hai.

// show();
// show(int = 10);   // Error on call: show()



// 📊 Progress
// Function Overloading

// ✅ Different Number
// ✅ Different Type
// ✅ Different Order
// ✅ Return Type Trap
// ✅ Default Argument Trap

// Progress: 70%