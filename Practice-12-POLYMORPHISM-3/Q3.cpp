// Ab Problem

// Maan lo ye code hai:

// Animal *ptr = new Dog();

// Ab batao:

// Compiler kya dekhe?

// Pointer = Animal

// Object = Dog

// Ab confusion hai.

// Agar main likhu:

// ptr->sound();

// To kaunsa chale?

// Animal::sound()

// OR

// Dog::sound()

// 🤔 Ab compiler compile time pe decide nahi kar sakta.

// Isi problem ko solve karne ke liye C++ me aaya:

// virtual



// 🔥 Agla Question (Sabse Important)

// Predict the output.

#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal Sound";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog Bark";
    }
};

int main()
{
    Animal *ptr = new Dog();

    ptr->sound();
}


// ✅ Q1. Will it compile?

// Yes

// Correct. 👍

// Lekin tumne Q2 aur Q3 nahi diye. Chalo saath me samajhte hain.

// Code
// class Animal
// {
// public:
//     virtual void sound()
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
//     Animal *ptr = new Dog();

//     ptr->sound();
// }
// Q2. Output?

// 👉 Output:

// Dog Bark
// Kyun?

// Dhyan do:

// Animal *ptr = new Dog();

// Yahan:

// Pointer ka type = Animal*
// Object ka type = Dog

// Aur sound() virtual hai.

// Isliye compiler kehta hai:

// "Main abhi decide nahi karunga. Program run hote time dekhunga ki actual object kis class ka hai."

// Run time par dekha:

// Object = Dog

// To call hua:

// Dog::sound();

// Output:

// Dog Bark
// Ab wahi code bina virtual
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
//     Animal *ptr = new Dog();

//     ptr->sound();
// }
// Output?
// Animal Sound

// 😲 Ye dekhkar bahut students shock ho jaate hain.

// Sabse Important Difference
// Without virtual

// Compiler dekhta hai:

// Animal *ptr

// Aur bolta hai:

// "Pointer Animal ka hai, to Animal::sound() hi call karunga."

// Output:

// Animal Sound
// With virtual

// Compiler bolta hai:

// "Pointer Animal ka hai, lekin main actual object run time par check karunga."

// Run time:

// Object = Dog

// Output:

// Dog Bark
// 🎯 Placement Definition

// A virtual function allows the program to call the overridden function of the actual object at runtime, even when accessed through a base class pointer or reference.

// 🧠 Ek Trick (Kabhi Nahi Bhoologe)

// Maan lo tumhare paas ye hai:

// Animal *ptr;

// Isse compare karo:

// Without virtual

// Compiler:

// "Mujhe pointer dikhta hai."

// Animal*
//    ↓
// Animal::sound()
// With virtual

// Compiler:

// "Pointer ko ignore karo, object dekho."

// Animal* -----> Dog Object
//                  ↓
//            Dog::sound()
// ⭐ Golden Rule

// Without virtual:

// Pointer decides.

// With virtual:

// Actual object decides.

// 🔥 Bas ye ek line yaad rakh lo.