
// Constructor Example
// class A
// {
// public:
//     A()
//     {
//         cout << "A ";
//     }
// };

// class B : virtual public A
// {
// public:
//     B()
//     {
//         cout << "B ";
//     }
// };

// class C : virtual public A
// {
// public:
//     C()
//     {
//         cout << "C ";
//     }
// };

// class D : public B, public C
// {
// public:
//     D()
//     {
//         cout << "D ";
//     }
// };

// int main()
// {
//     D obj;
// }
// 🎯 Placement Question
// Output?
// A B C D

// ⚠️ Notice carefully.

// Earlier (without virtual):

// A B A C D

// Now (with virtual):

// A B C D
// Why?

// Because A is constructed only once.

// 📌 Interview Definition

// Q: Why do we use virtual inheritance?

// Best Answer:

// Virtual inheritance is used to solve the Diamond Problem. It prevents multiple copies of the common base class by creating only one shared copy, eliminating ambiguity and reducing memory usage.

// 🧠 Difference (Must Remember)
// Without virtual	With virtual
// 2 copies of base class	1 shared copy
// Ambiguity	No ambiguity
// Base constructor executes twice	Base constructor executes once
// Memory duplication	No duplication
