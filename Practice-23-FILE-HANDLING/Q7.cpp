// 🎯 Placement MCQ
// Q1.

// Kaunsi class Read aur Write dono kar sakti hai?

// A. ofstream

// B. ifstream

// C. fstream

// D. cout

// Q2.

// ios::out ka use kisliye hota hai?

// A. Read

// B. Write

// C. Delete

// D. Append

// Q3.

// ios::in ka use kisliye hota hai?

// A. Read

// B. Write

// C. Copy

// D. Rename

// ❌ No hints. Ye 3 MCQs lagbhag har File Handling interview me pooche ja sakte hain.

// fsstream
// Write
// Read

// 🔥 Excellent! 3/3 Correct.

// Answers
// Q1. Kaunsi class Read + Write dono karti hai?

// ✅ C. fstream

// Q2. ios::out kisliye use hota hai?

// ✅ Write

// Q3. ios::in kisliye use hota hai?

// ✅ Read

// 📂 Next Concept: Append Mode (ios::app)

// ⭐⭐⭐⭐⭐ Placement Importance: High

// Ab tak jab hum likhte the:

// ofstream file("student.txt");

// Aur file me pehle se tha:

// Hello

// Fir hum likhe:

// file << "Kaif";

// To file ban jayegi:

// Kaif

// ❌ Purana data delete ho gaya.

// Agar purane data ke baad naya data add karna ho?

// Use:

// ios::app
// Example

// File pehle:

// Hello

// Code:

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     ofstream file("student.txt", ios::app);

//     file << " Kaif";

//     file.close();
// }

// Ab file ban jayegi:

// Hello Kaif

// ✅ Purana data delete nahi hua.

// ⭐ Memory Trick
// ios::out  → Overwrite (purana data replace)

// ios::app  → Append (purane data ke end me add)
// 🎯 Placement Question

// Maan lo student.txt me pehle se likha hai:

// Hello

// Ab ye code chalta hai:

// ofstream file("student.txt", ios::app);

// file << " World";

// file.close();
// Questions
// Will it compile?
// Final file content kya hoga?

// A.

// World

// B.

// Hello

// C.  --------Correct

// Hello World

// D.

// HelloWorld

// ❌ No hints. Ye ios::app ka sabse common placement question hai.




// 📊 Progress
// ✅ ofstream
// ✅ ifstream
// ✅ getline()
// ✅ fstream
// ✅ ios::in
// ✅ ios::out
// ✅ ios::app
