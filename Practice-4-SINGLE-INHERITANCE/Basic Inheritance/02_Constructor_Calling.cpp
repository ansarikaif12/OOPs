// Step 1: Theory
// Rule 1 ⭐⭐⭐⭐⭐

// Whenever a derived class object is created, the base class constructor is always executed first.


// class Animal
// {
// };

// class Dog : public Animal
// {
// };

// int main()
// {
//     Dog d;
// }

// Flow:


// Dog d;
//    │
//    ▼
// Animal Constructor
//    │
//    ▼
// Dog Constructor
//    │
//    ▼
// Object Ready



// 🤔 But WHY?

// Yahi placement interview ka favourite question hai.

// Suppose ye code hai:

// class Animal
// {
// protected:
//     int age;

// public:
//     Animal()
//     {
//         age = 5;
//     }
// };

// class Dog : public Animal
// {
// public:
//     Dog()
//     {
//         cout << age;
//     }
// };

// Agar C++ pehle Dog() chala de...

// To ye line:

// cout << age;

// kis value ko print karegi?

// 👉 Problem!

// Kyuki age initialize hi nahi hua.

// Isliye language ka rule hai:

// Base Class
// ↓

// Derived Class
// 🧠 Memory Visualization

// Jab:

// Dog d;

// banta hai.

// Memory:

// +-------------------------+
// | Animal Part             |
// |-------------------------|
// | age                     |
// +-------------------------+
// | Dog Part                |
// +-------------------------+

// ⚠️ Dhyan do.

// Dog ka constructor tab tak safely kaam nahi kar sakta jab tak Animal wala part complete na ho jaye.

// Isliye Parent pehle.

// 📌 Golden Rule

// The derived class depends on the base class, so the base class must be fully initialized before the derived class constructor executes.

// Ye line interview me bol di to interviewer impress ho jayega.

// 🎤 Interview Question 1

// Suppose interviewer poochta hai:

// Why does the base class constructor execute before the derived class constructor?


// Derived class base class par depend karti hai. Isliye sabse pehle base class ka constructor object ke base part ko initialize karta hai. Jab base class completely initialize ho jati hai, tab derived class constructor execute hota hai.

// Initialize ka matlab hai kisi variable ko uski starting value dena.

Why do we prefer initializer lists over assignment inside the constructor?

Pehle ye code dekho.
Method 1: Assignment
class Student
{
    string name;

public:
    Student(string n)
    {
        name = n;
    }
};

Flow:

Step 1: name object create hota hai.
Step 2: name ko default initialize kiya jata hai.
Step 3: name = n (assignment hoti hai)

Yani 2 operations hue.

Method 2: Initializer List
class Student
{
    string name;

public:
    Student(string n) : name(n)
    {
    }
};

Flow:

Step 1: name object create hota hai.
Step 2: Directly n se initialize ho jata hai.

Yani sirf 1 operation.

Memory View
Assignment
Memory Allocate
       │
       ▼
Default Initialization
       │
       ▼
Assignment
Initializer List
Memory Allocate
       │
       ▼
Direct Initialization
Isliye Initializer List Better Hai
1. More Efficient ⭐⭐⭐⭐⭐

Ek extra assignment bach jati hai.

2. Mandatory in Some Cases ⭐⭐⭐⭐⭐

Ye sirf optimization nahi hai.

Kuch situations me initializer list use karna compulsory hota hai.

Jaise:

const int x;

Ya

int &ref;

Inko constructor body me assign nahi kar sakte.

Ye hum aage detail me padhenge.

🎤 Placement Ready Answer

Initializer lists are preferred because they initialize data members directly instead of first creating them and then assigning values. This is more efficient and is also required for const members, reference members, and base class constructor calls.

⭐⭐⭐⭐⭐ Bahut Important Connection

Ab samjho inheritance me hum ye kyun likhte hain:

Manager(string n, int t)
    : Employee(n), teamSize(t)
{
}

Yahan:

Employee(n)

Function call nahi hai.

❌ Ye normal function call nahi hai.

Ye base class constructor initialization hai.

Matlab:

Employee part ko direct initialize karo.

Isi wajah se initializer list inheritance me use hoti hai.

🧠 What You Learned (README.md)
## Constructor Calling

- Base class constructor always executes first.
- Derived class constructor executes after the base class.
- Base class constructor is called using an initializer list.
- Initializer lists directly initialize data members.
- Initializer lists are more efficient than assignment.
📌 Mera Observation

Abhi tumne ek weak area reveal kiya hai.

Constructor Initializer List tumne pehle padh li thi, lekin uska "why" clear nahi tha.

Isliye hum kabhi-kabhi purane topics ko bhi inheritance se connect karke revise karenge. Ye revision waste nahi hoga—balki concepts ko aur strong karega.

🚀 Ab Agla Step

Ab hum Mini Coding Example karenge.

Isme sirf 20–25 lines ka code hoga jisme tum apni aankhon se dekhoge:

Base constructor pehle call hota hai.
Child constructor baad me.
Initializer list se base constructor kaise call hota hai.

Uske baad main tumse output aur dry run poochunga, aur phir actual coding practice shuru karenge. Yehi sequence GitHub ke 02_Constructor_Calling.cpp ke liye bhi perfect rahega.