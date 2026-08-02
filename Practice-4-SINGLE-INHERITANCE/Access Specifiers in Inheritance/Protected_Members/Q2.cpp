// 😈 Next Practice (No Hints)

// Create two classes.

// Vehicle
// Protected:
// string brand
// Public:
// Constructor
// Car
// Publicly inherit from Vehicle
// Protected:
// int speed
// Public:
// Constructor
// displayDetails() (Print both brand and speed)

// No hints. 💪

#include<iostream>
using namespace std;

class Vehicle{
    protected:
    string brand;
    public:
    Vehicle(string b):brand(b){

    }
};

class Car: public Vehicle{
    protected:
    int speed;
    public:

    Car(string b, int s): Vehicle(b), speed(s){

    }

    void displayDetails(){
        cout<<"Brand: "<<brand<<" Speed: "<<speed<<endl;
    }
};

int main(){
    Car c1("BMW",80);
    c1.displayDetails();
}