#include<iostream>
using namespace std;

class abc{
    mutable int x;
    int *y;

    const int z;
    public:
    // constructor : old style

    // abc(int _x,int _y, int _z=0){ //here _z calleed default argument
    //     x=_x;
    //     y=new int(_y);
    //     z=_z;
    // }


    // initialization list
    abc(int _x,int _y, int _z=0):x(_x), y(new int (_y)), z(_z){  // same behave as above constructor
        cout<<"in init list"<<endl;
    }

    int getX() const{
        x=10; // yaha pr const yaani ki promise break ho rha hai by assigning x to mutable keyword but it is not good as a good programmer, it is only use for debugging purpose
        return x;
    }

    void setX(int a){
        x=a;
    }


    int getY() const{
        // int f=20;
        // y=&f; // error
        return *y;
    }

    void setY(int b){
        *y=b;
    }

    int getZ() const{
        return z;
    }
};

void printabc(const abc &a){
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;
    cout<<a.getZ()<<endl;
}

int main(){
    abc a(1,2);
    printabc(a);
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;
}
