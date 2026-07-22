// const keyword:
    // 1)the const keyword is used to declare that a varible, function, or object is immutable, i.e., its value cannot be changed after initialisation.
    // 2)E.g., if you declare a variable as const int x=5;, you cannot modify the value of x later in the program. Any attempt to modify the value will result in a compilation error.
    // 3)you can declare a function as const, which means that it does not modify the state of the object it is called on.
    // 4)compiler may be able to store const variables in read-only memory, which can result in faster access time.

// #include<iostream>
// using namespace std;

// int main(){
//     const int x=5; // x is constant.
//     // initialization  can be done. but we can't reassign a value.
//     // x=10; // error lvalue
//     cout<<x<<endl;
// }


// C++ HAVE TWO CONCEPTS:
    // lvalue->varibles having memory location (Example: int x, char y)
    // ravlue->variables doesn't have memory location. (Example: int &a=b;, const 5)


// #include<iostream>
// using namespace std;

// int main(){
//     const int x=5; // x is constant.
//     // initialization  can be done. but we can't reassign a value.=-------
//     // x=10; // error lvalue

//     // int *p=&x; //not work in latest compiler, it is obselate 
//     // *p=10;
//     cout<<x<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     //const int x=5; // x is constant.
//     // initialization  can be done. but we can't reassign a value.----
//     // x=10; // error lvalue

//     // int *p=&x; //not work in latest compiler, it is obselate 
//     // *p=10;
//     // cout<<x<<endl;

//     // 2) const with pointers------
    
//     // if i write const before * then content will be const-----

//     // const int *a=new int(2); // const data, non-const pointer
//     // int const *a= new int(2); //same as line number 51
//     // cout<<*a<<endl;
//     // // *a=2;  // error: can't change the content of pointer.
//     // // cout<<*a<<endl;
//     // int b=20;
//     // a=&b; //pointer itself can be reassigned.
//     // cout<<*a<<endl;




//     // CONST Pointer, but NON-CONST data.-------
//     // int *const a=new int(2);
//     // cout<<*a<<endl;
//     // *a=20;//chal jayega
//     // cout<<*a<<endl;

//     // int b=50;
//     // a=&b; // nahi chalega, because CONST pointer

//     // CONST Pointer, CONST Data-----------

//     // const int *const a =new int(10);
//     // cout<<*a<<endl;
//     // *a=50; // error
//     // int b=10;
//     // a=&b;// error
// }


// #include<iostream>
// using namespace std;

// class abc{
//     int x;
//     int *y;

//     int z;
//     public:
//     abc(){
//         x=0;
//         y=new int(0);
//     }
//     abc(int _x,int _y, int _z=0){ //here _z calleed default argument
//         x=_x;
//         y=new int(_y);
//         z=_z;
//     }

//     int getX() const{
//         //x=50; //error lvalue
//         return x;
//     }

//     void setX(int a){
//         x=a;
//     }


//     int getY() const{
//         // int f=20;
//         // y=&f; // error
//         return *y;
//     }

//     void setY(int b){
//         *y=b;
//     }

//     int getZ() const{
//         return z;
//     }
// };

// void printabc(const abc &a){
//     cout<<a.getX()<<endl;
//     cout<<a.getY()<<endl;
//     cout<<a.getZ()<<endl;
// }

// int main(){
//     abc a(1,2);
//     printabc(a);
//     cout<<a.getX()<<endl;
//     cout<<a.getY()<<endl;
// }











#include<iostream>
using namespace std;

class abc{
    mutable int x;
    int *y;

    int z;
    public:
    abc(){
        x=0;
        y=new int(0);
    }
    abc(int _x,int _y, int _z=0){ //here _z calleed default argument and default argument hmesha rightmost likhe jate hai
        x=_x;
        y=new int(_y);
        z=_z;
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

