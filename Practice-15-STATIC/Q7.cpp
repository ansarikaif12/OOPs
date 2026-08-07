// 🎯 Placement Trap Question

// Predict the output.

#include<iostream>
using namespace std;

class Demo
{
public:
    int x = 10;
    static int y;

    static void show()
    {
        cout << y << endl;
        cout << x << endl;
    }
};

int Demo::y = 20;

int main()
{
    Demo::show();
}


// Tumne exactly interview wala point pakad liya.

// Because a static function cannot access non-static data members directly.

// ✅ Bilkul sahi.

// Why?
// static void show()

// Static function ka koi object nahi hota.

// Lekin:

// int x = 10;

// x har object ka alag variable hai.

// Compiler confuse ho jayega:

// "Kis object ka x print karun?"

// Isliye ye allowed nahi hai.

// Solution 1

// Object banao.

// static void show()
// {
//     Demo d;

//     cout << d.x;
// }

// ✅ Allowed

// Solution 2 (Best)

// x ko bhi static bana do.

// static int x;

// Ab:

// cout << x;

// ✅ Allowed

// Kyuki ab x bhi class ka hai, kisi object ka nahi.

// 🎯 Placement Interview Question

// Q. Why can't a static member function access non-static data members directly?

// Answer:

// Because a static function belongs to the class and has no object (this pointer). A non-static data member belongs to an object, so without an object the compiler doesn't know which object's data member to access.

// Ye answer product-based companies me bhi poocha jata hai.