// 📂 Standard Exception (Sirf Basics)

// C++ me pehle se kuch exceptions bani hoti hain.

// Example:

#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    try
    {
        throw runtime_error("Database Error");
    }
    catch(runtime_error &e)
    {
        cout << e.what();
    }
}

// Output:

// Database Error

// Bas itna jaana kaafi hai ki:

// runtime_error
// logic_error
// exception

// C++ ki built-in exceptions hain.

// Inhe detail me padhna placement ke liye zaruri nahi hai.