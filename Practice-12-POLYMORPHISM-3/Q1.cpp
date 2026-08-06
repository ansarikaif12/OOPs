// 📂 Function Overriding

// Sabse pehle coding.

#include<iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog Bark" << endl;
    }
};

int main()
{
    Animal a;
    Dog d;

    a.sound();

    d.sound();
}



// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// Animal Sound
// Dog Bark

// ✅ Correct.

// Q3.

// Tumne answer diya:

// Function Overloading

// ❌ Incorrect.

// Ye Function Overriding hai.

// Why?
// Function Overloading
// class Demo
// {
// public:
//     void show(int);
//     void show(double);
// };
// ✅ Same class
// ✅ Different parameters
// Function Overriding
// class Animal
// {
// public:
//     void sound() {}
// };

// class Dog : public Animal
// {
// public:
//     void sound() {}
// };
// ✅ Parent class
// ✅ Child class
// ✅ Same function name
// ✅ Same parameters

// Isliye ye Function Overriding hai.

// 🎯 Placement Trick

// Agar interviewer bole:

// Overloading aur Overriding me sabse pehla difference batao.

// Tum turant bolo:

// Function Overloading	Function Overriding
// Same Class	Parent & Child Class
// Different Parameters	Same Parameters
// Compile-Time Polymorphism	Runtime Polymorphism ka base concept

// Bas ye 3 points bol diye to interviewer khush.


// Q4.

// Ye Runtime Polymorphism kyun nahi hai?

// Code:

// Dog d;

// d.sound();

// Socho.

// Hint nahi dunga.

// Ye question Microsoft, Amazon, Juspay aur bahut product companies me poocha jata hai.

// Kyun ye sirf Function Overriding hai, Runtime Polymorphism nahi?


// Pehle ye code dekho
// class Animal
// {
// public:
//     void sound()
//     {
//         cout << "Animal Sound";
//     }
// };

// class Dog : public Animal
// {
// public:
//     void sound()
//     {
//         cout << "Dog Bark";
//     }
// };

// int main()
// {
//     Dog d;
//     d.sound();
// }

// Tumne object kis class ka banaya?

// Dog d;

// 👉 Dog

// Aur call kis class ka function hua?

// d.sound();

// 👉 Dog::sound()

// Compiler ko sab kuch compile time par hi pata hai.

// Usko pata hai:

// Object = Dog
// Function = Dog::sound()

// Isliye compiler bina kisi confusion ke Dog::sound() call kar deta hai.

// Compiler ki Thinking
// Object = Dog

// ↓

// Dog class me sound() hai?

// ↓

// Yes

// ↓

// Dog::sound() call karo

// Sab kuch compile hone se pehle decide ho gaya.

// Isliye isse kehte hain:

// Function Overriding

// Lekin Runtime Polymorphism nahi.


// 🔥 Bhai ye hi to important question hai! Isi se Runtime Polymorphism samajh aata hai.

// Maan lo Dog class me sound() hai hi nahi.

// #include<iostream>
// using namespace std;

// class Animal
// {
// public:
//     void sound()
//     {
//         cout << "Animal Sound";
//     }
// };

// class Dog : public Animal
// {
//     // No sound() here
// };

// int main()
// {
//     Dog d;
//     d.sound();
// }
// Question

// Will it compile?

// 👉 Yes.

// Output
// Animal Sound
// Kyun?

// Compiler sochta hai:

// Dog d;

// ↓

// Dog class me sound() hai?

// ↓

// ❌ No

// ↓

// Parent (Animal) me sound() hai?

// ↓

// ✅ Yes

// ↓

// Animal::sound() call karo

// Isliye inheritance ki wajah se Dog ko Animal ka sound() mil jata hai.

// Ek aur case

// Agar Dog me sound() hai:

// class Dog : public Animal
// {
// public:
//     void sound()
//     {
//         cout << "Dog Bark";
//     }
// };

// Ab compiler sochta hai:

// Dog d;

// ↓

// Dog class me sound() hai?

// ↓

// ✅ Yes

// ↓

// Dog::sound() call karo

// Output:

// Dog Bark
// ⭐ Golden Rule

// Compiler hamesha pehle child class me function dhoondta hai.

// Agar mil gaya:

// Child Function

// Agar nahi mila:

// Parent Function