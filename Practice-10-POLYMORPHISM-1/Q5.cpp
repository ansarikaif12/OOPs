// 😈 Placement Trap #4 (Very Important)

// Ab dekhte hain ye compile hota hai ya nahi.

#include<iostream>
using namespace std;

class Demo
{
public:

    void show(int a)
    {
        cout << "Integer";
    }

    void show(int a = 0)
    {
        cout << "Default";
    }
};

int main()
{
    Demo d;

    d.show();
}


// Q1.

// Will it compile?

// No

// ✅ Correct.

// Q2.

// Why?

// Tumne likha:

// because compiler get confuse about the function of show there are parameters in both functions

// ✅ Concept bilkul sahi hai.

// Bas reason ko aur accurate banate hain.

// Code
// void show(int a)
// {
//     cout << "Integer";
// }

// void show(int a = 0)
// {
//     cout << "Default";
// }

// Ab dekho:

// Jab tum likhte ho:

// d.show();

// Compiler sochta hai:

// Option 1
// show()

// Ye second function ban sakta hai, kyunki:

// show(int a = 0)

// Default value ki wajah se ise bina argument ke bhi call kar sakte ho.

// Option 2

// Lekin problem usse pehle hi aa chuki hai.

// Dono functions ki signature dekho:

// show(int)
// show(int)

// Default value function signature ka part nahi hoti.

// Compiler ke hisaab se dono same function ban gaye.

// Isliye class define hote hi error aa jayega.

// 🚨 Important Point

// Bahut students sochte hain error d.show() par aayega.

// ❌ Nahi.

// Error pehle hi aa jayega jab compiler ye dekhega:

// void show(int);
// void show(int = 0);

// Ye duplicate declaration hai.

// ⭐ Golden Rule

// Ye invalid hai:

// void show(int);
// void show(int = 0);

// Ye valid hai:

// void show();
// void show(int);
