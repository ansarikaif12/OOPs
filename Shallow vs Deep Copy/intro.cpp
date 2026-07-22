// SHALLOW Vs DEEP COPY------------:

#include<iostream>
using namespace std;

class abc{
    public:
    int x;
    int *y;

    abc(int _x,int _y): x(_x),y(new int(_y)){}

    // default dumb copy constructor : IT DOES SHALLOW COPY

    abc(const abc &obj){
        x=obj.x;
        y=obj.y;
    }


    // OUR SMART DEEP COPY
    // abc(const abc &obj){
    //     x=obj.x;
    //     y=new int(*obj.y);
    // }
    
    void print() const{
        cout<<"X: "<<x<<"\nPTR Y: "<<y<<"\nContent of Y (*y): "<<*y<<endl;
    }



    ~abc(){
        delete y;
    }


};

int main(){
    // abc a(1,2);
    // cout<<"Printing a\n";
    // a.print();

    // // abc b(a);
    // // OR====== 
    // abc b=a;  // yaha pr b jo hai wo bhi same location ko point kr rha hai jo a object kr rha hai (copy constructor call)
    // cout<<"Printing b\n";
    // b.print();

    // *b.y=20;
    // cout<<"Printing b\n";
    // b.print();

    // cout<<"Printing a\n";
    // a.print();


    abc *a=new abc(1,2);
    abc b=*a; // shallow copy

    delete a;
    b.print();
}


// ALWAYS USE DEEP COPY BCZ SHALLOW COPY IS TOO  PROBLEMATIC