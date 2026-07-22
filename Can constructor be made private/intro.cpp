// can ctor(constructor) be made private? : ANS is YES, it can be private

// #include<iostream>
// using namespace std;

// class Box{
//     int width;

//     public:
//     // ctor
//     Box(int _w): width(_w){

//     }

//     int getWidth() const{
//         return width;
//     }

//     void setWidth(int _val){
//         width=_val;
//     }
// };

// int main(){
//     Box b(5);
//     cout<<b.getWidth()<<endl;
// }








// #include<iostream>
// using namespace std;

// class Box{
//     int width;
//     // ctor
//     Box(int _w): width(_w){

//     }
    
//     public:


//     int getWidth() const{
//         return width;
//     }

//     void setWidth(int _val){
//         width=_val;
//     }
// };

// int main(){
//     Box b(5);
//     cout<<b.getWidth()<<endl;
// }






#include<iostream>
using namespace std;

class Box{
    int width;
    // ctor
    Box(int _w): width(_w){

    }
    
    public:
    int getWidth() const{
        return width;
    }

    void setWidth(int _val){
        width=_val;
    }

    friend class BoxFactory;  //yaha pr box ne friend declare kiya hai boxfactory ko that mean keval boxfactory hi initialize kr skta hai, aur koi class nhi kr skta aur na hi main kr skta hai
};


class BoxFactory{
    int count;
    public:
    Box getABox(int _w){

        ++count;
        return Box(_w);
    }
};

int main(){
    BoxFactory bfact;
    Box b=bfact.getABox(5);
    cout<<b.getWidth()<<endl;
}