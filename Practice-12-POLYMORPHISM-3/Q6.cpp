// Dusra Question

// Tum pooch sakte ho:

// Child class me virtual likhna zaruri hai kya?

// Answer:

// ❌ Nahi.

// Ek baar base class me function virtual declare ho gaya, to child class me override hone wale function automatically virtual hi rehte hain.

// Example:

// class A
// {
// public:
//     virtual void show()
//     {
//         cout << "A";
//     }
// };

// class B : public A
// {
// public:
//     void show()      // virtual likhna optional hai
//     {
//         cout << "B";
//     }
// };

// Ye bilkul sahi hai.

// Chaaho to aise bhi likh sakte ho:

// class B : public A
// {
// public:
//     virtual void show()
//     {
//         cout << "B";
//     }
// };

// Ye bhi compile hoga, lekin virtual dobara likhna optional hai.

// ⭐ Interview Tip

// Modern C++ me virtual ki jagah override use karna best practice mana jata hai.

// class B : public A
// {
// public:
//     void show() override
//     {
//         cout << "B";
//     }
// };

// override compiler ko batata hai:

// "Main base class ke virtual function ko override kar raha hoon."

// Agar galti se function signature match nahi hua, to compiler error de dega. Ye bugs se bachata hai.

// 📌 Yaad Rakhna
// Base class        → virtual ✅ (Required)

// Child class       → override ✅ (Recommended)
//                    virtual  ✅ (Optional)

// 🎯 Placement interviews me agar interviewer pooche:

// "Where should we write the virtual keyword?"

// Tum confidently bol sakte ho:

// "The virtual keyword should be declared in the base class. Once declared, the overridden functions in derived classes remain virtual automatically. In modern C++, override is recommended in the derived class."