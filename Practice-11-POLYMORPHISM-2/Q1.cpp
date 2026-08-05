// 🎯 Placement Question
#include<iostream>
using namespace std;
class Demo
{
public:
    Demo()
    {
        cout << "A ";
    }

    Demo(int x)
    {
        cout << "B ";
    }

    Demo(double x)
    {
        cout << "C ";
    }
};

int main()
{
    Demo d1;
    Demo d2(10);
    Demo d3(10.5);
}


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// A
// B
// C

// ✅ Correct.

// Q3.

// Why does 10 call Demo(int)?

// Tumhara answer:

// because 10 is a integer so it will call that constructor which have integer type of parameter

// ✅ Bilkul sahi.

// Placement answer:

// The compiler always prefers an exact match. Since 10 is of type int, it directly calls Demo(int) instead of converting it to double.