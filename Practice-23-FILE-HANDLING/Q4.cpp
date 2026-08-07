// 🎯 Placement Question
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("data.txt");

    string s;

    file >> s;

    cout << s;
}

// Maan lo data.txt me likha hai:

// Open AI ChatGPT


// File (data.txt):
// Open AI ChatGPT
// Code:
// ifstream file("data.txt");

// string s;

// file >> s;

// cout << s;
// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// Open
// Q3. "AI ChatGPT" print kyun nahi hoga?

// 👉 Kyuki:

// file >> s;

// >> operator sirf ek word read karta hai.

// Jaise hi usse space milta hai, wo reading stop kar deta hai.

// Memory trick:

// >>  → One Word

// getline() → Complete Line
// Example

// File:

// I Love C++
// Agar likho:
// string s;
// file >> s;
// cout << s;

// Output:

// I
// Agar likho:
// string s;
// getline(file, s);
// cout << s;

// Output:

// I Love C++
// ⭐ Interview Question (Very Important)

// Q. Difference between >> and getline()?

// >>	getline()
// Reads one word	Reads complete line
// Stops at space	Reads until Enter/Newline

// 🎯 Concepts completed till now:

// ✅ ofstream (Write)
// ✅ ifstream (Read)
// ✅ >> vs getline()