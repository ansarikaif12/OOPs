// RUNTIME POLYMORPHISM--------:
    // function Overriding- makes function polymrphic.
    // Early vs Late Binding 
    // Virtual Keyword- Way to achieve polymorphism by deferring binding decision to runtime.
    // Override Keyword- helps to make the intension clear and allows the compiler to enforce overriding rules, making your code safer and easier to understand.
    // Upcasting/Down-casting.

// #include<iostream>
// using namespace std;

// class Shape{
//     public:
//     virtual void draw(){
//         cout<<"Generic drawing..."<<endl;
//     }
// };

// class Circle: public Shape{
//     public:
//     void draw() override{
//         cout<<"Circle drawing..."<<endl;
//     }
// };

// class Rectangle: public Shape{
//     public:
//     void draw() override{ 
//         cout<<"Rectangle drawing..."<<endl;
//     }
// };

// class Triangle: public Shape{
//     public:
//     void draw() override{
//         cout<<"Triangle drawing..."<<endl;
//     }
// };

// void shapeDrawing(Shape *s){
//     s->draw(); // draw is polymorphic
// }

// int main(){

//     // ye saare stack pr bane hai
//     // Circle c;
//     // Rectangle r;

//     // // Shape *s=&c; // upcasting
//     // shapeDrawing(&c);
//     // shapeDrawing(&r);

//     // // ye saare heap pr bane hai
//     // Triangle *t=new Triangle();
//     // shapeDrawing(t);

// }







// #include<iostream>
// using namespace std;

// class Shape{
//     public:
//     void draw(){
//         cout<<"Generic drawing..."<<endl;
//     }
// };

// class Circle: public Shape{
//     public:
//     void draw(){
//         cout<<"Circle drawing..."<<endl;
//     }
// };

// class Rectangle: public Shape{
//     public:
//     void draw(){ 
//         cout<<"Rectangle drawing..."<<endl;
//     }
// };

// class Triangle: public Shape{
//     public:
//     void draw(){
//         cout<<"Triangle drawing..."<<endl;
//     }
// };

// void shapeDrawing(Shape *s){
//     s->draw(); // draw is polymorphic
// }

// int main(){

//     // ye saare stack pr bane hai
//     // Circle c;
//     // Rectangle r;

//     // // Shape *s=&c; // upcasting
//     // shapeDrawing(&c);
//     // shapeDrawing(&r);

//     // // ye saare heap pr bane hai
//     // Triangle *t=new Triangle();
//     // shapeDrawing(t);


//     // without virtual keyword

//     Shape *s = new Shape();
//     s->draw();

//     // UPCASTING
//     Shape *s3=new Circle();
//     s3->draw();

//     Circle *c= new Circle();
//     c->draw();

//     // DOWNCASTING

//     Shape *s2=new Shape();
//     Circle *c2=(Circle *)s2;
//     c2->draw();
// }




// NOTE:
    // 1) without virtual-> left me jo likha hai wo call hoga ya jiske object me actual object store ho.
    // EXAMPLE: class A=new B();  //here A ka method call hoga
    // 2) with virtual-> actual jo hona chahiye ya jo actual object bana hai uska method call hoga


// upcasting and downcasting problem solved by with 'virtual' keyword.


// #include<iostream>
// using namespace std;

// class Shape{
//     public:
//     virtual void draw(){
//         cout<<"Generic drawing..."<<endl;
//     }
// };

// class Circle: public Shape{
//     public:
//     void draw(){
//         cout<<"Circle drawing..."<<endl;
//     }
// };

// class Rectangle: public Shape{
//     public:
//     void draw(){ 
//         cout<<"Rectangle drawing..."<<endl;
//     }
// };

// class Triangle: public Shape{
//     public:
//     void draw(){
//         cout<<"Triangle drawing..."<<endl;
//     }
// };

// void shapeDrawing(Shape *s){
//     s->draw(); // draw is polymorphic
// }

// int main(){

//     // ye saare stack pr bane hai
//     // Circle c;
//     // Rectangle r;

//     // // Shape *s=&c; // upcasting
//     // shapeDrawing(&c);
//     // shapeDrawing(&r);

//     // // ye saare heap pr bane hai
//     // Triangle *t=new Triangle();
//     // shapeDrawing(t);


//     // virtual keyword

//     Shape *s = new Shape();
//     s->draw();

//     // UPCASTING
//     Shape *s3=new Circle();
//     s3->draw();

//     Circle *c= new Circle();
//     c->draw();

//     // DOWNCASTING
//     Shape *s2=new Shape();
//     Circle *c2=(Circle *)s2;
//     c2->draw();
// }



// FINAL KEYWORD---------:
    // 1)in c++, the final specifier is used in two main contexts: with classes and with virtual member functions.
    // 2)Prevents class Inheritance: when you declare a class as final, it means that no other class can inherit from it.
    // 3)Preventing Virtual Function Overriding: the final specifier can also be used with virtual functions to prevent then from being overridden in derived classes.



#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void draw(){
        cout<<"Generic drawing..."<<endl;
    }
};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"Circle drawing..."<<endl;
    }
};

class Rectangle: public Shape{
    public:
    void draw(){ 
        cout<<"Rectangle drawing..."<<endl;
    }
};

class Triangle: public Shape{
    public:
    void draw(){
        cout<<"Triangle drawing..."<<endl;
    }
};

void shapeDrawing(Shape *s){
    s->draw(); // draw is polymorphic
}

int main(){

    // ye saare stack pr bane hai
    // Circle c;
    // Rectangle r;

    // // Shape *s=&c; // upcasting
    // shapeDrawing(&c);
    // shapeDrawing(&r);

    // // ye saare heap pr bane hai
    // Triangle *t=new Triangle();
    // shapeDrawing(t);


    // virtual keyword

    Shape *s = new Shape();
    s->draw();

    // UPCASTING
    Shape *s3=new Circle();
    s3->draw();

    Circle *c= new Circle();
    c->draw();

    // DOWNCASTING
    Shape *s2=new Shape();
    Circle *c2=(Circle *)s2;
    c2->draw();
}