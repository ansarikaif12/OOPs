// 😈 Practice 15 (Placement Level)

// Type: Output Prediction

// #include<iostream>
// using namespace std;

// class Parent
// {
// public:
//     Parent()
//     {
//         cout << "P ";
//     }

//     void show()
//     {
//         cout << "Parent ";
//     }
// };

// class Child : public Parent
// {
// public:
//     Child()
//     {
//         cout << "C ";
//     }

//     void display()
//     {
//         cout << "Child ";
//     }
// };

// int main()
// {
//     Child c;

//     c.show();
//     c.display();
// }
// Questions
// Will it compile?
// What will be the output?
// Explain the execution flow.



// Q1. Will it compile?

// Your Answer:

// Yes

// ✅ Correct.

// Q2. Output

// Tumne likha:

// P C
// Parent
// Child

// Conceptually 100% correct.

// Agar exactly output likho to:

// P C Parent Child

// Ya line by line:

// P C Parent Child

// Kyunki cout me endl nahi hai.

// Q3. Execution Flow

// Tumne likha:

// when object c created the base constructor call then derived constructor called

// ✅ Correct.

// Main isko interview-ready bana deta hoon:

// When the Child object is created, the base class constructor executes first, followed by the derived class constructor. After the object is fully created, show() is called (inherited from Parent), and then display() is called (defined in Child).