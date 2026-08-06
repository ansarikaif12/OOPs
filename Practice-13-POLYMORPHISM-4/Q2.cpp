// 💻 Practice 2 ⭐⭐⭐⭐☆

// Ab difficulty badhate hain.

// Question:

// Create an abstract class:

// Vehicle

// Requirements:

// virtual void start() = 0;

// Create 2 child classes:

// Car
// Bike

// Both should override:

// start()

// Output:

// Car Started
// Bike Started
// Rules
// Use constructor (even if empty).
// Create both objects in main().
// Call start() for both.

// ❌ No hints.


#include<iostream>
using namespace std;

class Vehicle
{
public:
    virtual void start() = 0;      // Pure Virtual Function
};

class Car : public Vehicle
{
public:
    Car()
    {
    }

    void start()
    {
        cout << "Car Started" << endl;
    }
};

class Bike : public Vehicle
{
public:
    Bike()
    {
    }

    void start()
    {
        cout << "Bike Started" << endl;
    }
};

int main()
{
    Car c;
    Bike b;

    c.start();
    b.start();

    return 0;
}


// Placement Notes
// ✅ Vehicle is an Abstract Class

// Because it contains:

// virtual void start() = 0;
// ✅ Can we create its object?
// Vehicle v;

// ❌ No.

// ✅ Can we create Car and Bike objects?
// Car c;
// Bike b;

// ✅ Yes.

// Because both classes implemented the pure virtual function start().

// ⭐ Interview Trap

// Agar Bike me start() implement na karo:

// class Bike : public Vehicle
// {
// };

// Aur fir likho:

// Bike b;

// ❌ Compile-time Error.

// Reason: Bike bhi abstract class ban jayegi kyunki usne inherited pure virtual function implement nahi kiya.


// Question (Interview Level):

// Agar main ye likhun:

// Vehicle *ptr = new Car();

// ptr->start();
// Compile hoga?
// Output kya hoga?
// Kyun?

// Q1. Will it compile?

// Yes

// ✅ Correct.

// Q2. Output?

// Car Started

// ✅ Correct.

// Q3. Why?

// Ye answer interviewer expect karega:

// Vehicle *ptr = new Car();

// ptr->start();
// ptr ka type = Vehicle*
// Actual object = Car
// start() is virtual

// Isliye runtime par actual object (Car) check hota hai aur Car::start() call hota hai.