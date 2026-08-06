// 🎯 Practice (Placement Level)

// Ab dekhte hain concept kitna clear hua.

#include<iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "A";
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "B";
    }
};

int main()
{
    A *ptr = new B();

    ptr->show();
}


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// B

// ✅ Correct.

// Q3.

// Why?

// Tumne likha:

// because due to virtual keyword compiler decided at the object making runtime

// ✅ Concept sahi hai.

// Bas interview me aise bolna:

// Because show() is declared as virtual, the function call is resolved at runtime. Although the pointer type is A*, it points to an object of class B. Therefore, B::show() is called.

// 🎯 Ab Main Ek Interview Question Puchta Hoon

// Ye question Amazon, Microsoft, Juspay, Walmart sab jagah poocha ja sakta hai.

// A *ptr = new B();
// Mere Questions
// Pointer kis type ka hai?
// Object kis type ka hai?
// Without virtual, kaunsa function call hoga?
// With virtual, kaunsa function call hoga?

// Sirf ye 4 answers do.

// 🔥 Aur ek chhota correction

// Tumne likha:

// compiler decided at the object making runtime

// Isse better line hogi:

// The compiler generates support for dynamic dispatch because of the virtual keyword. At runtime, the program checks the actual object type and calls the appropriate overridden function.

// Ye line placement interview me kaafi strong lagti hai.