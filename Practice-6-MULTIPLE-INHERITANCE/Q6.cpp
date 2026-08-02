To difficulty badhate hain. Ab wahi questions nahi jo sirf :: laga kar solve ho jaye.

💻 Practice 38 ⭐⭐⭐⭐⭐ (Real Placement)
#include<iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "A" << endl;
    }
};

class B
{
public:
    void display()
    {
        cout << "B" << endl;
    }
};

class C : public A, public B
{
public:
    void test()
    {
        // Complete
    }
};

int main()
{
    C obj;

    obj.test();
}
// Questions
// Complete only test().
// What will be the output?
// Will there be any ambiguity? Why?


// 😂 Haan bhai! Bilkul. Maine hi question galat type kar diya tha.

// Maine A me:

// void show()

// Aur B me:

// void display()

// Rakha tha. Isliye ambiguity thi hi nahi.

// Tumne sahi pakda. 👏

// test() bas itna hota:

// void test()
// {
//     show();
//     display();
// }

// Output:

// A
// B

// Aur ambiguity?

// No.

// Reason:

// show() sirf A me hai aur display() sirf B me hai. Compiler exactly jaanta hai kis function ko call karna hai. Isliye ambiguity nahi hoti.

// 🔥 Good catch. Isi liye main chahta hoon tum blindly agree na karo. Agar question me mistake ho to pakdo, jaise abhi pakda.