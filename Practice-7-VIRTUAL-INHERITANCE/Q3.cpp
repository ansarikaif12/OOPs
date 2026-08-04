// 💻 Practice 41 ⭐⭐⭐⭐⭐ (Placement)
// #include<iostream>
// using namespace std;

// class A
// {
// public:
//     void show()
//     {
//         cout << "A";
//     }
// };

// class B : virtual public A
// {
// };

// class C : virtual public A
// {
// };

// class D : public B, public C
// {
// };

// int main()
// {
//     D obj;

//     obj.show();
// }
// Questions
// Will it compile?
// What is the output?
// Why is there no ambiguity now?

// ⚠️ No hints.

// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// A

// ✅ Correct.

// Q3.

// Why is there no ambiguity?

// Tumne likha:

// because C and B classes both inherit virtually from A and D class make only one shared copy of A class

// ✅ 100% Correct.

// Bas interview me thoda aur professional bolna:

// Both B and C inherit A virtually. Therefore, class D contains only one shared copy of A. Since there is only one show() function inherited from A, the compiler is not confused, and obj.show() executes successfully.