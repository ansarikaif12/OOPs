// // this pointer jis object ki abhi baat ho  rhi hai us par point kr rha hai

// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     // Attribute / Variables / Properties
//     int id;
//     int age;
//     string name;
//     int nos;


//     // Constructor : Default
//     Student(){
//         cout<<"Student default constructor called"<<endl;
//     }

//     // Behavior/Methods/Functions
//     void study(){
//         cout<<this->name<<" Studying"<<endl;
//     }

//     void sleep(){
//         cout<<this->name<<" Sleeping"<<endl;
//     }

//     void bunk(){
//         cout<<this->name<<" Bunking"<<endl;
//     }

//     // Destructor : Default
//     ~Student(){
//         cout<<this->name<<" Student default destructor called"<<endl;
//     }

// };


// int main(){
//     Student A;
//     A.id=1;
//     A.age=15;
//     A.name="Ram";
//     A.nos=6;

//     A.study();

//     Student B;
//     B.id=2;
//     B.age=15;
//     B.name="Rahul";
//     B.nos=5;

//     B.bunk();
//     return 0;
// }






// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     // Attribute / Variables / Properties
//     int id;
//     int age;
//     string name;
//     int nos;


//     // Constructor : Default
//     Student(){
//         cout<<"Student default constructor called"<<endl;
//     }

//     // Parameterized Constructor
//     Student(int id, int age, string name, int nos){
//         cout<<name<<" Student Parameterized constructor called"<<endl;
//         this->id=id;
//         this->age=age;
//         this->name=name;
//         this->nos=nos;
//     }

//     // Behavior/Methods/Functions
//     void study(){
//         cout<<this->name<<" Studying"<<endl;
//     }

//     void sleep(){
//         cout<<this->name<<" Sleeping"<<endl;
//     }

//     void bunk(){
//         cout<<this->name<<" Bunking"<<endl;
//     }

//     // Destructor : Default
//     ~Student(){
//         cout<<this->name<<" Student default destructor called"<<endl;
//     }

// };


// int main(){
//     // Student A;
//     // A.id=1;
//     // A.age=15;
//     // A.name="Ram";
//     // A.nos=6;

//     // A.study();

//     // Student B;
//     // B.id=2;
//     // B.age=15;
//     // B.name="Rahul";
//     // B.nos=5;

//     // B.bunk();


//     Student A(1,15,"Ranu",6);
//     Student B(2,14,"Harry",5);
//     Student C(3,16,"Peter",4);
//     Student D(4,18,"Tom",7);

//     cout<<A.name<<" "<<A.age<<endl;

//     A.bunk();
//     B.sleep();
//     return 0;
// }













// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     // Attribute / Variables / Properties
//     int id;
//     int age;
//     string name;
//     int nos;


//     // Constructor : Default
//     Student(){
//         cout<<"Student default constructor called"<<endl;
//     }

//     // Parameterized Constructor
//     Student(int id, int age, string name, int nos){
//         cout<<name<<" Student Parameterized constructor called"<<endl;
//         this->id=id;
//         this->age=age;
//         this->name=name;
//         this->nos=nos;
//     }

//     // Copy Constructor
//     Student(const Student &srcobj){ //here srcobj signifies A
//         cout<<srcobj.name<<" Student copy constructor called"<<endl;
//         this->id=srcobj.id;
//         this->age=srcobj.age;
//         this->name=srcobj.name;
//         this->nos=srcobj.nos;
//     }

//     // Behavior/Methods/Functions
//     void study(){
//         cout<<this->name<<" Studying"<<endl;
//     }

//     void sleep(){
//         cout<<this->name<<" Sleeping"<<endl;
//     }

//     void bunk(){
//         cout<<this->name<<" Bunking"<<endl;
//     }

//     // Destructor : Default
//     ~Student(){
//         cout<<this->name<<" Student default destructor called"<<endl;
//     }

// };


// int main(){

//     Student A(1,15,"Ranu",6); // Define in Stack but if you want dynamic memory allocation then use pointer

//     // Copy Constructor
//     // Student C=A;
//     // OR
//     Student C(A);

//     cout<<C.name<<" "<<A.name<<endl;
//     return 0;
// }








// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     // Attribute / Variables / Properties
//     int id;
//     int age;
//     string name;
//     int nos;


//     // Constructor : Default
//     Student(){
//         cout<<"Student default constructor called"<<endl;
//     }

//     // Parameterized Constructor
//     Student(int id, int age, string name, int nos){
//         cout<<name<<" Student Parameterized constructor called"<<endl;
//         this->id=id;
//         this->age=age;
//         this->name=name;
//         this->nos=nos;
//     }

//     // Copy Constructor
//     Student(const Student &srcobj){ //here srcobj signifies A
//         cout<<srcobj.name<<" Student copy constructor called"<<endl;
//         this->id=srcobj.id;
//         this->age=srcobj.age;
//         this->name=srcobj.name;
//         this->nos=srcobj.nos;
//     }

//     // Behavior/Methods/Functions
//     void study(){
//         cout<<this->name<<" Studying"<<endl;
//     }

//     void sleep(){
//         cout<<this->name<<" Sleeping"<<endl;
//     }

//     void bunk(){
//         cout<<this->name<<" Bunking"<<endl;
//     }

//     // Destructor : Default
//     ~Student(){
//         cout<<this->name<<" Student default destructor called"<<endl;
//     }

// };


// int main(){

//     //Student A(1,15,"Ranu",6); // Define in Stack but if you want dynamic memory allocation then use pointer



//     // Dynamic Allocation or Student Pointer
//     Student *A=new Student(1, 14, "Love", 4);

//     cout<<A->name<<" "<<A->age<<endl;
//     A->study();

//     // After running the Above code you see that the destructor not working because if you work on dynamic allocation then you should delete manually while stack called default constructor, So:

//     delete A;

//     return 0;
// }







#include<iostream>
using namespace std;

class Student{
    public:
    // Attribute / Variables / Properties
    int id;
    int age;
    string name;
    int nos;
    int *gpa;

    // Constructor : Default
    Student(){
        cout<<"Student default constructor called"<<endl;
    }

    // Parameterized Constructor
    Student(int id, int age, string name, int nos, float gpa){
        cout<<name<<" Student Parameterized constructor called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
        this->gpa=new int(gpa);
    }

    // Copy Constructor
    Student(const Student &srcobj){ //here srcobj signifies A
        cout<<srcobj.name<<" Student copy constructor called"<<endl;
        this->id=srcobj.id;
        this->age=srcobj.age;
        this->name=srcobj.name;
        this->nos=srcobj.nos;
    }

    // Behavior/Methods/Functions
    void study(){
        cout<<this->name<<" Studying"<<endl;
    }

    void sleep(){
        cout<<this->name<<" Sleeping"<<endl;
    }

    void bunk(){
        cout<<this->name<<" Bunking"<<endl;
    }

    // Destructor : Default
    ~Student(){
        cout<<this->name<<" Student default destructor called"<<endl;
        delete this->gpa;
        cout<<"Gpa destructor called"<<endl;
    }

};

int main(){

    // Dynamic Allocation or Student Pointer
    Student *A=new Student(1, 14, "Love", 4, 8.86);

    cout<<A->name<<" "<<A->age<<" "<<*(A->gpa)<<endl;
    A->study();

    // After running the Above code you see that the destructor not working because if you work on dynamic allocation then you should delete manually while stack called default constructor, So:

    delete A;

    return 0;
}