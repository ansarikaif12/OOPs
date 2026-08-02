// Type: Find & Fix the Error
// #include<iostream>
// using namespace std;

// class Animal
// {
// public:
//     Animal()
//     {
//         cout << "Animal Constructor" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Dog is Barking" << endl;
//     }
// };

// int main()
// {
//     Dog d("Tom");

//     d.bark();

//     return 0;
// }
// Your Task
// Will this code compile?
// If No, then fix it.
// Explain why the error occurred.

// ⚠️ No hints.

// Ye exact type ka question placement interviews me poocha jata hai.

// 1. No
// 2. Dog d; instead of Dog d("Tom");
// 3. because d object take parameter but inside the Dog class there is no Parameterized constructor

// 🔥 Excellent! Ye actual placement interview level ka answer tha.

// 📊 Score: 10/10 ⭐⭐⭐⭐⭐
// Q1. Will it compile?

// Your Answer:

// No

// ✅ Correct.

// Q2. Fix it.

// Your Answer:

// Dog d;

// ✅ Correct.

// Q3. Why?

// Your Answer:

// because d object take parameter but inside the Dog class there is no Parameterized constructor

// ✅ Correct.

// Bas interview me thodi better English/Hinglish use karna.

// Placement Ready Answer

// The code will not compile because we are creating a Dog object using a parameterized constructor (Dog("Tom")), but the Dog class does not have a parameterized constructor. Since no matching constructor exists, the compiler generates an error.

// 🧠 Interview Follow-up (Very Important)

// Agar interviewer pooch de:

// "Dog ke paas constructor nahi hai, to phir Dog d; kaise chal gaya?"

// Tum kya answer doge?

// Ye bahut common follow-up hai.

// 📌 Ek Important Concept

// Tumne shayad notice nahi kiya.

// Dog class me constructor nahi hai.

// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//     }
// };

// Fir bhi:

// Dog d;

// chal gaya.

// Why?

// 👉 Kyunki compiler automatically default constructor generate kar deta hai (jab user ne koi constructor define nahi kiya ho).

// Aur us constructor ke andar pehle:

// Animal()

// call hota hai.

// Phir object banta hai.