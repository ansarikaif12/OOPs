#include<iostream>
#include "bird.h"
using namespace std;


void birddoesSomething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->fly();
}

int main(){
    // Bird *bird=new sparrow();
    // Bird *bird=new eagle();
    Bird *bird=new pigeon();
    birddoesSomething(bird);
    return 0;
}

// kisi bhi abstract class ka ya c++ ke interface ka object nhi bana skte hai