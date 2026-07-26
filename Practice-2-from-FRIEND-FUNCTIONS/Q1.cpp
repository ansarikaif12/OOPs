// NOTES==================================================================
// 📖 Friend Function
// Pehle ek problem samjho
// class Student
// {
// private:
//     int marks = 95;
// };

// Question:

// Agar main() me likho:

// Student s;
// cout << s.marks;

// Kya ye chalega?

// ❌ Nahi.

// Reason?

// Kyuki marks private hai.

// Sirf class ke member functions hi directly access kar sakte hain.

// Lekin...

// Kabhi-kabhi hume kisi bahar ke function ko bhi private members access karne dena hota hai.

// Yahi kaam Friend Function karta hai.

// Definition (Interview)

// A friend function is a non-member function that is allowed to access the private and protected members of a class.

// Dhyan do:

// Friend function class ka member nahi hota.

// Lekin usse permission milti hai private members access karne ki.

// Syntax
// class Student
// {
// private:
//     int marks;

// public:
//     friend void display(Student);
// };

// Aur bahar:

// void display(Student s)
// {
//     cout << s.marks;
// }

// Notice:

// display() class ke bahar define hua.
// Phir bhi marks access kar raha hai.
// Real-Life Example

// Socho:

// 🏦 Bank Locker

// Locker = Private Data
// Customer = Class
// Bank Manager = Friend Function

// Normally koi locker nahi khol sakta.

// Lekin bank manager ko special permission hoti hai.

// Manager locker ka owner nahi hai.

// Bas uske paas permission hai.

// Friend function bhi exactly waise hi hai.

// Interview Points (Bahut Important)
// Friend Function:
// ✅ Class ka member nahi hota.
// ✅ Private members access kar sakta hai.
// ✅ Protected members bhi access kar sakta hai.
// ✅ this pointer nahi hota.
// ✅ Object ke through members access karta hai.
// Mini Quiz (Answer do)
// Q1.

// Friend function class ka member hota hai ya non-member function?

// Q2.

// Friend function private data ko access kar sakta hai?

// Yes / No

// Q3.

// Friend function ke paas this pointer hota hai?

// Yes / No


// Interviewer:

// If a friend function is not a member of the class, then how can it access private members?

// Friend function class ka member nahi hota, lekin jab class usse friend keyword ke saath declare karti hai, tab class usse special permission de deti hai. Isi permission ki wajah se wo private aur protected members access kar sakta hai.


// CODING===============================================


// 💻 Friend Function - Coding Question 1
// Question

// Create a class named Student.

// It should have two private data members:
// name
// marks
// Create a constructor to initialize these values.
// Create a friend function named displayStudent.
// The friend function should display the student's name and marks.

// Rules:

// ❌ Do not use getter functions.
// ❌ Do not make the data members public.
// ✅ Use a friend function to access the private data.

#include<iostream>
using namespace std;

class Student{
    string name;
    int marks;
public:
    Student(string n,int m): name(n),marks(m){

    }

    friend void displayStudent(Student);
};

void displayStudent(Student s){
    cout<<s.name<<" "<<s.marks<<endl;
}

int main(){
    Student s1("Kaif",101);
    displayStudent(s1);

}



// Agar interviewer pooche:

// "Friend function class ka member nahi hai, to usse friend keyword class ke andar hi kyu likhte hain?"

// Placement Interview Answer

// friend keyword class ke andar isliye likha jata hai kyunki class hi decide karti hai ki kis external function ko apne private aur protected members access karne ki permission deni hai. Is declaration ke through class us function ko special access grant karti hai.

// 🎯 Yaad rakhne wali line:

// "Friendship is granted by the class, not requested by the function."