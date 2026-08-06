// Ab tumhe virtual ka basic idea aa gaya hai.

// Ab chalte hain Pure Virtual Function, jo placement interviews me bahut important hai.

// 📂 Pure Virtual Function

// Sabse pehle code dekho.

#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
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
    Dog d;
    d.sound();
}



// Sabse pehle syntax samjho
// virtual void sound() = 0;

// Iska matlab ye nahi hai ki function delete ho gaya.

// Iska matlab hai:

// "Main sirf function ka promise kar raha hoon. Iski implementation child class degi."

// Real Life Example

// Socho tum ek company me ho.

// Manager bolta hai:

// "Har employee ko work() function implement karna hi padega."

// Lekin manager ye nahi batata ki kaam kaise karna hai.

// class Employee
// {
// public:
//     virtual void work() = 0;
// };

// Ab:

// class Developer : public Employee
// {
// public:
//     void work()
//     {
//         cout << "Coding";
//     }
// };
// class Tester : public Employee
// {
// public:
//     void work()
//     {
//         cout << "Testing";
//     }
// };

// Har child apna implementation dega.

// ⭐ Golden Rule

// Agar kisi class me ek bhi Pure Virtual Function ho,

// virtual void sound() = 0;

// To wo class Abstract Class ban jati hai.