// 1) macros are preprocessor directives that allow you to define contants, functions, or code snippets that can be used throughout your code. They are typically defined using the #define directive and are evaluated by the preprocessor before the code is compiled.

// 2) macros can be used for a variety of purposes, such as defining constants or creating shorthand for commonly used expressions.



#include<iostream>
using namespace std;

#define PI 3.14159465
#define MAXX(x,y)(x>y? x:y)

float circleArea(float r){
    return PI * r * r;
}

float circlePerimeter(float r){
    return 2 * PI * r;
}

void fun(){
    int x=6;
    int b=17;
    int c=MAXX(x,b);  //c=x>b? x:b;
}

void fun2(){
    int a=2;
    int b=11;
    int c=MAXX(a,b);
}

void fun3(){
    int x=2;
    int b=18;
    int c=MAXX(x,b);
}

int main(){
    cout<<circleArea(65.4)<<endl;
}