// 🎯 Placement Interview Question
#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "A";
    }
};

class B : public A
{
};

int main()
{
    B obj;
    obj.show();
}



// Question
// Will it compile?
// Output?
// Compiler show() ko kaise search karega? :Tumhara answer exactly wahi hai jo compiler karta hai.

// Compiler pehle child class (B) me show() dhoondhega. Agar nahi mila, to parent class (A) me search karega aur A::show() call karega.

// ✅ Ye reasoning interview me bhi sahi hai.


// Ab Bas Ek Step Baaki Hai 😈

// Ab tak compiler hamesha aise hi kaam kar raha tha:

// Object banao

// ↓

// Child class me function hai?

// ↓

// Yes → Child Function

// No

// ↓

// Parent Function

// Compiler ko compile time me hi sab pata chal jata hai.