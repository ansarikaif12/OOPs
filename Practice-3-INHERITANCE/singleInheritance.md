Single Inheritance
What is Single Inheritance?

When one derived class inherits from only one base class, it is called Single Inheritance.

Simple Hindi me:

Jab ek child class sirf ek hi parent class se inherit karti hai, to usse Single Inheritance kehte hain.

Diagram
        Animal
           ↑
           |
          Dog

Yahan:

Animal → Base (Parent) Class
Dog → Derived (Child) Class

Dog sirf Animal se inherit kar raha hai.

Syntax
class Animal
{
    // Parent Members
};

class Dog : public Animal
{
    // Child Members
};
Real-Life Example

Socho ek company me:

Parent Class
Employee
---------
name
salary
work()
Child Class
Developer
---------
coding()

Developer ke paas:

✅ name

✅ salary

✅ work()

Aur apna:

✅ coding()

Isliye inheritance use hua.

Code Example
#include<iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout<<"Animal is eating"<<endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout<<"Dog is barking"<<endl;
    }
};

int main()
{
    Dog d;

    d.eat();
    d.bark();

    return 0;
}

Output:

Animal is eating
Dog is barking
Memory Concept ⭐⭐⭐⭐⭐

Ye placement me bahut poocha jata hai.

Jab:

Dog d;

banta hai...

Memory me sirf Dog ka part nahi banta.

Memory kuch aisi hoti hai:

+----------------------+
| Animal Part          |
|----------------------|
| Animal Data Members  |
|----------------------|
| Dog Part             |
|----------------------|
| Dog Data Members     |
+----------------------+

👉 Isliye Dog object, Animal ke members bhi use kar sakta hai.


<!-- 
🎯 Placement Concept

Ye question maine jaan-bujhkar isliye diya tha taki tum ye concept pakdo:

When a base class does not have a default constructor, the derived class must explicitly call the base class constructor.

Ye bahut common interview question hai. -->

<!-- 
❌ Mistake 1 (Important)

Tumne main() me likha:

Student s1("Kaif");

Lekin Student class me koi constructor nahi hai.

class Student : public Person
{
public:
    void study()
    {
        cout << "Student is studying";
    }
};

Is code se compilation error aayega.

Kyun?

Jab Student object banta hai, C++ pehle Person constructor call karta hai.

Lekin Person ke paas default constructor nahi hai.

Uske paas sirf:

Person(string n)

hai.

Isliye Student ko explicitly Person constructor call karna padega.

✅ Correct Way
class Student : public Person
{
public:

    Student(string n) : Person(n)
    {
    }

    void study()
    {
        cout << "Student is studying";
    }
};

Ab:

Student s1("Kaif");

Perfect chalega.

❌ Mistake 2

Question me tha:

Print the name.

Tumne:

s1.study();

call kiya.

Lekin:

s1.displayName();

call hi nahi kiya.

Final main()
int main()
{
    Student s1("Kaif");

    s1.displayName();
    s1.study();
} -->