// 🎯 Final Friend Function Output Challenge (Placement Level)

// Predict the output:

#include <iostream>
using namespace std;

class Demo
{
    int x;

public:
    Demo(int a)
    {
        x = a;
    }

    friend void change(Demo &d);
};

void change(Demo &d)
{
    d.x += 10;
    cout << d.x << " ";
}

int main()
{
    Demo d(5);

    change(d);
    change(d);

    change(d);
}
// Questions
// Output kya hoga?
// Reason bhi explain karna.


// Step-by-Step Reason

// Initially:

// d.x = 5
// First Call
// change(d);
// d.x += 10;
// 5 → 15

// Print:

// 15
// Second Call

// Ab d.x 15 hai.

// 15 → 25

// Print:

// 25
// Third Call

// Ab d.x 25 hai.

// 25 → 35

// Print:

// 35
// ✅ Final Output
// 15 25 35
// Why?

// Kyuki function me object reference se pass hua hai:

// void change(Demo &d)

// Reference original object ko modify karta hai.

// Agar by value hota:

// void change(Demo d)

// Tab output hota:

// 15 15 15

// Kyuki har baar nayi copy banti.
