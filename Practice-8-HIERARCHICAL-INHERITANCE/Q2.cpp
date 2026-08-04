// 💻 Practice 42 ⭐⭐⭐⭐☆ (Placement)

// Create these classes.

// Animal

// Public:

// eat()
// Dog

// Publicly inherit from Animal

// Public:

// bark()
// Cat

// Publicly inherit from Animal

// Public:

// meow()
// main()

// Create:

// Dog d;
// Cat c;

// Call all valid functions.

// Questions
// How many child classes does Animal have?
// Can Dog call eat()?
// Can Cat call eat()?
// Can Dog call meow()?
// Can Cat call bark()?
// Rules
// ❌ No hints
// ❌ No theory during coding
// 🎯 Placement level

#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};

class Dog: public Animal{
    public:
    void bark(){
        cout<<"Dog bark"<<endl;
    }
};

class Cat: public Animal{
    public:
    void meow(){
        cout<<"Cat meow"<<endl;
    }
};

int main(){
    Dog d;
    Cat c;
    
    d.eat();
    d.bark();
    c.eat();
    c.meow();
}



// 🔥 Excellent! 10/10 ⭐⭐⭐⭐⭐

// Tumne bina code likhe hi concept sahi pakad liya.

// Q1.

// How many child classes does Animal have?

// 2

// ✅ Correct.

// Q2.

// Can Dog call eat()?

// Yes

// ✅ Correct.

// Reason:
// Dog inherits from Animal.

// Q3.

// Can Cat call eat()?

// Yes

// ✅ Correct.

// Reason:
// Cat also inherits from Animal.

// Q4.

// Can Dog call meow()?

// No

// ✅ Correct.

// Reason:
// meow() belongs to Cat. Dog neither defines nor inherits it.

// Q5.

// Can Cat call bark()?

// No

// ✅ Correct.

// Reason:
// bark() belongs to Dog. Cat neither defines nor inherits it.

// 🎯 Placement Rule
// One Parent
//      │
//  ┌───┴───┐
//  │       │
// Dog     Cat
// ✅ Parent's members → available to both children.
// ❌ One child cannot access another child's members.

// Ye line interview me directly bol sakte ho.


// Interviewer:

// What is the difference between Single Inheritance and Hierarchical Inheritance?

// Expected Answer:

// In Single Inheritance, one derived class inherits from one base class. In Hierarchical Inheritance, multiple derived classes inherit from the same base class.

// Ye answer almost har company me poocha ja sakta hai.