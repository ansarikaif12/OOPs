<!-- 📂 File Handling - Part 1

⭐⭐⭐⭐⭐ Placement Importance: High

Sabse pehle

Question:

Abhi tak hum output kahan print karte the?

cout << "Hello";

Output:

Hello

Ye output screen (console) par print hota hai.

Lekin agar hume ye permanently save karna ho?

Example:

Name : Kaif
Age  : 21

Ek file me save karna ho.

To kya karenge?

👉 File Handling

Real Life Example

Suppose tum ek Banking App bana rahe ho.

User ka data:

Kaif
Balance = 5000

Program band ho gaya.

Agar file me save nahi kiya to?

❌ Data gayab.

Isliye data ko file me store karte hain.

Definition (Interview)

File Handling is the process of creating, reading, writing, and updating files using a program.

Hindi:

Program ke through file ko create, read, write aur update karna hi File Handling hai.

C++ me 3 Important Classes
1. ofstream

👉 File me Write karne ke liye.

Memory Trick:

o = Output

Output → File

2. ifstream

👉 File se Read karne ke liye.

Memory Trick:

i = Input

File → Program

3. fstream

👉 Read + Write dono.

Easy Trick
ofstream  → Write

ifstream  → Read

fstream   → Read + Write
First Program (Write into File)

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("student.txt");

    file << "Hello Kaif";

    file.close();
}
Step-by-Step
Step 1
ofstream file("student.txt");

Ek file create/open hogi:

student.txt
Step 2
file << "Hello Kaif";

Console me nahi.

Ye text student.txt me save hoga.

Step 3
file.close();

File close ho jayegi.

Result

student.txt

Hello Kaif
⭐ Golden Rule
cout  → Screen

ofstream → File -->