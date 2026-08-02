// 💻 Practice 06 (🟟 Medium)

// Create two classes:

// Book
// Private:
// string title
// Public:
// Constructor
// displayTitle()
// EBook
// Publicly inherit from Book
// Private:
// double fileSize
// Public:
// Constructor
// displayEBook()
// main()

// Create one object and call both display functions.

// Bas itna hi.

// ❌ No hints.

// ❌ No expected output.

// ❌ No syntax help.

// ❌ No concept reminder.


#include<iostream>
using namespace std;

class Book{
    string title;
    public:
    Book(string t): title(t){

    }

    void displayTitle(){
        cout<<"Display Title: "<<title<<endl;
    }
};

class EBook: public Book{
    double fileSize;
    public:
    EBook(double fS,string t): Book(t), fileSize(fS){

    }

    void displayEBook(){
        cout<<"Display EBook: "<<fileSize<<endl;
    }
};

int main(){
    EBook e1(21,"King Kong");
    e1.displayTitle();
    e1.displayEBook();
}