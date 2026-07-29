<!-- Topic 1: What is Inheritance?
Definition (Interview)

Inheritance is an OOP concept in which one class acquires the properties and behaviors (data members and member functions) of another class.

Simple Hindi me:

Ek class dusri class ke variables aur functions ko inherit (use) kar leti hai, bina dobara likhe.

Real-Life Example

Socho:

Parent
Name
Age
Walk()
Talk()
Child

Child ke paas bhi ye sab qualities hoti hain.

Aur apni extra qualities bhi ho sakti hain.

Study()
Play()

Exactly yehi C++ me hota hai.

C++ Example
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking";
    }
};

Ab:

Dog d;

d.eat();   // inherited
d.bark();  // own function

Dog ke paas dono functions hain.

Syntax
class Parent
{
    // members
};

class Child : public Parent
{
    // child members
};

Yahan:

Parent → Base Class / Parent Class / Super Class
Child → Derived Class / Child Class / Sub Class

Interview me ye sab naam use hote hain.

Inheritance Kyun Use Karte Hain?
1. Code Reusability ⭐⭐⭐⭐⭐

Ek baar code likho.

Bar-bar mat likho.

Example:

Agar 20 animals hain.

Har class me:

eat()
sleep()
walk()

dobara likhne ki zarurat nahi.

2. Easy Maintenance

Agar eat() me change karna hai.

Sirf Parent class me change karo.

Saare children automatically update ho jayenge.

3. Better Organization

Common code alag.

Special code alag.

Project clean dikhta hai. -->


<!-- 
Interview Question 1 ⭐

Agar interviewer puche:

Can a derived class access the members of the base class?

Placement-ready answer:

Yes. A derived class can access the accessible members of the base class, depending on the inheritance type and access specifiers.

Abhi hum public inheritance padh rahe hain, isliye simple version:

Yes. In public inheritance, a derived class can access the public members of the base class.

Note: Private members ko directly access nahi kar sakti. Ye hum Access Specifiers wale module me detail me padhenge. -->