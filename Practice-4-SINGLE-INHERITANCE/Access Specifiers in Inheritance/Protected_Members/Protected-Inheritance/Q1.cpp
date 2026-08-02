// 🚀 Next Topic
// Protected Inheritance

// Ab tak hum likhte aaye hain:

// class Child : public Parent

// Ab pehli baar likhenge:

// class Child : protected Parent

// Ye placement interviews ka favourite topic hai.

// Isme tum seekhoge:

// Public member ka kya hota hai?
// Protected member ka kya hota hai?
// Object se kya access hoga?
// Derived class ke andar kya access hoga?

// Ye topic thoda tricky hai, lekin agar ye samajh aa gaya to public/protected/private inheritance kabhi nahi bhoologe.

// 💻 Practice 26 (New Topic)

// No hints.

// Create this skeleton only:

// class Animal
// {
// public:
//     void eat();

// protected:
//     void sleep();
// };

// class Dog : protected Animal
// {
// public:
//     void test();
// };

// test() ke andar jo functions valid hain unhe call karo.

// main() me Dog object banao.

// Bas itna hi.

// ❌ No hints.

// ❌ No theory.


// 😄 Nahi bhai, ye incomplete answer hai.

// Main question tha:

// class Animal
// {
// public:
//     void eat();

// protected:
//     void sleep();
// };

// class Dog : protected Animal
// {
// public:
//     void test();
// };

// Aur maine poocha tha:

// test() ke andar kaun-kaun se functions call kar sakte ho?

// Tumne answer diya:

// d1.test valid only

// ❌ Ye main() wale access ka answer hai.

// Main pooch raha tha test() function ke andar.

// Correct Answer
// void test()
// {
//     eat();      // ✅
//     sleep();    // ✅
// }

// Dono call honge.

// Ab main() me:
// Dog d1;

// Kaun valid hai?

// d1.test();    // ✅
// d1.eat();     // ❌
// d1.sleep();   // ❌

// Yahi Public Inheritance aur Protected Inheritance ka sabse bada difference hai.

// 🎯 Rule
// Public Inheritance
// class Dog : public Animal
// d.eat();      // ✅
// Protected Inheritance
// class Dog : protected Animal
// d.eat();      // ❌

// Lekin:

// void test()
// {
//     eat();     // ✅
// }

// Ye chalega.