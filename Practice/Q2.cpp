#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    string author;
    int price;

public:
    Book()
    {
        cout<<"Default Constructor Called"<<endl;
        title = "C++ Programming";
        author = "Bjarne Stroustrup";
        price = 599;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b;
    b.display();
    return 0;
}