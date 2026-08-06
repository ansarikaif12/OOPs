// Destructor

// ⭐⭐⭐⭐⭐ Placement Importance: High

// Sabse Pehle
// Constructor kab call hota hai?
// Student s1;

// ✅ Object create hote hi.

// Destructor kab call hota hai?

// Jab object destroy hota hai.

// Example:

// int main()
// {
//     Student s1;

// }   // <-- main khatam

// Jaise hi main() khatam hoga,

// s1

// destroy hoga.

// Aur destructor automatically call hoga.

// Syntax
// class Student
// {
// public:

//     Student()
//     {
//         cout<<"Constructor"<<endl;
//     }

//     ~Student()
//     {
//         cout<<"Destructor"<<endl;
//     }
// };

// Notice:

// ~Student()
// Destructor ka naam class ke naam jaisa hota hai.
// Bas uske aage ~ (tilde) lagta hai.
// Rules (Placement)
// Rule 1

// Destructor ka naam class ke naam jaisa hota hai.

// ~Student()
// Rule 2

// Destructor ka koi return type nahi hota.

// ❌ Wrong

// void ~Student()
// Rule 3

// Destructor koi parameter nahi leta.

// ❌ Wrong

// ~Student(int x)
// Rule 4

// Ek class me sirf ek destructor hota hai.

// Destructor overload nahi kar sakte.