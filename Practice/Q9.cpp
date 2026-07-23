// Question 7 (Difficulty ⭐⭐⭐⭐☆)

// Write a C++ program that satisfies the following requirements:

// Create a class named Laptop.
// Data members:
// brand
// ram (in GB)
// price
// Create three objects.
// Take input for all three laptops.
// Print the details of the second most expensive laptop.
// Example

// Input

// Dell 16 70000
// HP 8 50000
// Lenovo 16 65000

// Output

// Brand: Lenovo
// RAM: 16 GB
// Price: 65000
// Rules
// ❌ No constructors
// ❌ No member functions
// ❌ No arrays
// ❌ No loops
// ❌ No functions
// ❌ No hints

#include <iostream>
#include <string>
using namespace std;

class Laptop
{
public:
    string brand;
    int ram;
    float price;
};

int main()
{
    Laptop l1, l2, l3;

    cout << "Enter details of Laptop 1: ";
    cin >> l1.brand >> l1.ram >> l1.price;

    cout << "Enter details of Laptop 2: ";
    cin >> l2.brand >> l2.ram >> l2.price;

    cout << "Enter details of Laptop 3: ";
    cin >> l3.brand >> l3.ram >> l3.price;

    if ((l1.price >= l2.price && l1.price <= l3.price) ||
        (l1.price <= l2.price && l1.price >= l3.price))
    {
        cout << "Second Most Expensive Laptop:" << endl;
        cout << "Brand : " << l1.brand << endl;
        cout << "RAM   : " << l1.ram << " GB" << endl;
        cout << "Price : " << l1.price << endl;
    }
    else if ((l2.price >= l1.price && l2.price <= l3.price) ||
             (l2.price <= l1.price && l2.price >= l3.price))
    {
        cout << "Second Most Expensive Laptop:" << endl;
        cout << "Brand : " << l2.brand << endl;
        cout << "RAM   : " << l2.ram << " GB" << endl;
        cout << "Price : " << l2.price << endl;
    }
    else
    {
        cout << "Second Most Expensive Laptop:" << endl;
        cout << "Brand : " << l3.brand << endl;
        cout << "RAM   : " << l3.ram << " GB" << endl;
        cout << "Price : " << l3.price << endl;
    }

    return 0;
}