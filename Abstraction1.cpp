// ABSTRACTION IN C++=========:
    // 1) Delivering only essential information to the outer world while masking the background details.
    // 2) It is a design and programming method that seperates the interface from the implementation.
    // 3) Real life example, various functionalities of AirPods but don't know the actual implementation/working.
        // i) To drive a car, one only needs to know the driving rocess and not the mechanics of the car engine
    

// ABSTARCTION IN HEADER FILES===========:
// 1) Function's implementation is hidden in header files.
// 2) we could use the same program without knowing its inside working.
// 3) E.g., Sort(), for example, is used to sort an array, a list, or a collection of items, and we know that if we give a container to sort, it will sort it, but we don't know which sorting algorithm it uses to sort that container.


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<int> v={3,2,4,5};
//     sort(v.begin(),v.end());

//     for( auto i:v){
//         cout<<i<<endl;
//     }
//     return 0;
// }


// ABSTRACTION USING CLASSES----------:
// 1) Grouping data members and member functions into classes using access specifiers.
// 2) A class can choose which data members are visible to the outside world and which are hidden.

// #include<iostream>
// using namespace std;

// class AbstractionExample{
//     private:
//     int num;
//     char ch;

//     public:
//     void setMyValue(int n, char c){
//         this->num=n;
//         this->ch=c;
//     }

//     void getMyValue(){
//         cout<<"Number is: "<<num<<endl;
//         cout<<"Char is: "<<ch<<endl;
//     }
// };

// int main(){
//     AbstractionExample obj;
//     //obj.num=5; // not accessible bcz of private 
//     obj.setMyValue(5,'K');
//     obj.getMyValue();
// }


// WHAT IS ABSTRACT CLASS?-------:
// 1) Class that contains at least one pure virtual function, and these classes cannot be instantiated.
// 2) It has come from the idea of Abstraction.

// NOTE: for coding part goes to abstract design folder

