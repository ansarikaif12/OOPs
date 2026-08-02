// 💻 Practice 20 (🟡 Medium)

// Create two classes.

// Appliance
// Private:
// string company
// Public:
// Parameterized constructor
// showCompany()
// WashingMachine
// Publicly inherit from Appliance
// Private:
// int capacity
// Public:
// Parameterized constructor
// showCapacity()
// main()

// Create:

// WashingMachine wm("LG", 7);

// Call all possible functions.

#include<iostream>
using namespace std;

class Appliance{
    string company;
    public:
    Appliance(string c): company(c){

    }

    void showCompany(){
        cout<<company<<endl;
    }
};

class WashingMachine: public Appliance{
    int capacity;
    public:
    WashingMachine(string cn,int c):Appliance(cn), capacity(c){

    }

    void showCapacity(){
        cout<<capacity<<endl;
    }
};

int main(){
    WashingMachine wm("LG",7);
    wm.showCompany();
    wm.showCapacity();
}