// Perfect. Ab Read File (ifstream) start karte hain.

// 📂 ifstream (Read File)

// ⭐⭐⭐⭐⭐ Placement Importance: High

// Abhi humne file me data likhna seekha.

// Ab usi data ko read karna seekhte hain.

// Example

// Maan lo student.txt me pehle se ye likha hai:

// Hello Kaif

// Ab hume isse program me read karna hai.

// Program
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     ifstream file("student.txt");

//     string data;

//     file >> data;

//     cout << data;

//     file.close();
// }
// Step-by-Step
// Step 1
// ifstream file("student.txt");

// File open hogi read mode me.

// Step 2
// string data;

// Ek variable banaya.

// Step 3
// file >> data;

// File se data uthakar data variable me store kar diya.

// Step 4
// cout << data;

// Output:

// Hello

// ⚠️ Dhyan do!

// File me tha:

// Hello Kaif

// Lekin output sirf:

// Hello

// Aaya.

// Kyun?

// Kyuki:

// file >> data;

// Sirf ek word read karta hai.

// Space aate hi reading ruk jaati hai.

// Agar poori line read karni ho?

// Uske liye use karte hain:

// getline(file, data);

// Example:

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("student.txt");

    string data;

    getline(file, data);

    cout << data;

    file.close();
}

// Output:

// Hello Kaif

// ✅ Ab poori line read ho gayi.

// ⭐ Golden Rule
// file >> variable
//         ↓
// Sirf ek word read karta hai.

// getline(file, variable)
//         ↓
// Poori line read karta hai.