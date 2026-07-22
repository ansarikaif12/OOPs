
// #include<iostream>
// using namespace std;

// class abc{
//     public:
//     int x;
//     int y;

//     void print() const{
//         cout<<this->x<<" "<<this->y<<endl;  // here this is a pointer which is belong to a perticular object
//     }
// };

// int main(){
//     abc obj1={1,2};
//     abc obj2={4,5};

//     obj1.print();
//     obj2.print();
// }




// static data member: that variable is going to share memory with all of the class instance.


// #include<iostream>
// using namespace std;

// class abc{
//     public:
//     static int x, y;

//     void print() const{
//         cout<<this->x<<" "<<this->y<<endl;  // here this is a pointer which is belong to a perticular object
//     }
// };

// int abc::x;
// int abc::y;

// int main(){
//     abc obj1;
//     obj1.x=1;
//     obj1.y=2;
//     obj1.print();

//     abc obj2;  //yaha sare instances ek hi x and y ko point kr rhe hai 
//     obj2.x=10;  
//     obj2.y=20;

//     obj1.print();
//     obj2.print();
// }



// static member function: there is no instance of that class being passed into that method.


#include<iostream>
using namespace std;

class abc{
    public:
    int x, y;

    abc(): x(0),y(0) {}

    static void print(){
        //  no this pointer accessible.
        cout<<"I am static print."<<endl;
    }
};


int main(){
    abc obj1;
    abc::print();
    obj1.print();

    abc obj2;

    abc::print();
    abc::print();
}









