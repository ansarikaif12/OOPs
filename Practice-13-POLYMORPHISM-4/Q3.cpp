// 📂 Topic: Abstract Class
// Definition

// Ek Abstract Class wo class hoti hai jisme kam se kam ek Pure Virtual Function hota hai.

// Example:

// class Shape
// {
// public:
//     virtual void area() = 0;
// };

// Yahan Shape ek Abstract Class hai.

// Rules (Placement Important)
// Rule 1

// Agar class me 1 bhi Pure Virtual Function hai,

// virtual void area() = 0;

// ➡️ Wo class Abstract Class ban jati hai.

// Rule 2

// ❌ Abstract class ka object nahi bana sakte.

// Shape s;    // Error
// Rule 3

// ✅ Child class ko saare Pure Virtual Functions implement karne padenge.

// class Rectangle : public Shape
// {
// public:
//     void area()
//     {
//         cout << "Rectangle Area";
//     }
// };
// Rule 4

// Agar child class implementation nahi deti,

// to child class bhi Abstract Class ban jayeg