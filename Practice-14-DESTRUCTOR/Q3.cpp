// 💻 Output Prediction 2 ⭐⭐⭐⭐☆
#include<iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor" << endl;
    }

    ~Test()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    Test t1;

    {
        Test t2;

        cout << "Inside Block" << endl;
    }

    cout << "Outside Block" << endl;
}


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// Constructor
// Constructor
// Inside Block
// Destructor
// Outside Block
// Destructor

// ✅ Perfect.

// Q3.

// Why is t2 destroyed first?

// Tumne likha:

// because t2 scope is destroy before t1

// ✅ Bilkul sahi.

// Placement answer:

// t2 is a local object inside the inner block {}. As soon as the block ends, its lifetime ends, so its destructor is called immediately. t1 belongs to main(), so it is destroyed only when main() exits.

// ⭐ Golden Rule
// {
//     Test t2;
// }

// Jaise hi block (}) khatam,

// ➡️ t2 destroy.

// Destructor call.

// 🎯 Placement Trick

// Constructor Order:

// Top → Bottom

// Destructor Order:

// Bottom → Top (Reverse Order)

// Ye line interview me bahut poochte hain.