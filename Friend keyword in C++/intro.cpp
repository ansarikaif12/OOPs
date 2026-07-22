// FRIEND CLASS IN C++---------:
    // 1) friend is a keyword in c++ that is used to share the information of a class that was previously hidden.
    // 2) For example, the private members of a class are hidden from every other class and cannot be modified except through getters or setters. Similarly, the protected members are hidden from all classes other than its children classes.


#include<iostream>
using namespace std;

class A{
    private:
    int x;

    public:
    A(int _val): x(_val){

    }

    int getX() const{
        return x;
    }

    void setX(int _val){
        x=_val;
    }

    friend class B;
    friend void print(const A &a);
};

// friend class
class B{
    public:
    void print(const A &a){
        // cout<<a.getX()<<endl;
        cout<<a.x<<endl;
    }
};

// friend function
void print(const A &a){
    cout<<a.x<<endl;
}
int main(){
    A a(5);
    B b;
    b.print(a);
    print(a);
}



// FRIENDSHIP USING FRIEND KEYWORD----------:
// 1) although information hiding is encouraged because it prevents unwanted bugs in a program, there are cases where two classes need to frequently interact with eachother.
// 2)in such a scenario, one of the classes to be declares aanother to be its friend.
// 3)the class declaring the friendship can now make all of its data availabl to its friend.