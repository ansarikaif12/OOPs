// DESIGN STRATEGY-----:
// 1) abstraction divides code into two categories: interface and implementation. So, when creating yoir component, keep the interface seperate from the implementation so that if the underlying implementation changes, the interface stays the same.
// 2) in this interface, any program that uses these interface would remain unaffected and would require recompilation with the most recent implementation.

#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

// INTERFACE
class Bird{
    public:
    virtual void eat()=0;
    virtual void fly()=0;
    // Classes that inherits this class has to implement pure virtual functio.
};

// IMPLEMENTATION
class sparrow: public Bird{
    private:
    void eat(){
        cout<<"Sparrow is eating"<<endl;
    }

    void fly(){
        cout<<"Sparrow is flying\n";
    }
};

class eagle: public Bird{
    public:
    void eat(){
        cout<<"Eagle is eating"<<endl;
    }

    void fly(){
        cout<<"Eagle is flying\n";
    }
};

class pigeon: public Bird{
    public:
    void eat(){
        cout<<"Pigeon is eating faster "<<endl;
    }

    void fly(){
        cout<<"Pigeon is flying faster\n";
    }
};

#endif