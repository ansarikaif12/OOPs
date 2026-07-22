// Definition:
    // means bind the data(attribute/variables) and methods(functions/behaviour) in a class.
    // like a capsule, it combines and binds them together.

// Function of Encapsulations:
    // Provides a secure layer
    // hides internal implementation of code and data in a class.
    // Exposes only necessary information to the external world.

// As we hiding data from outer classes or the world, Encapsulation is also known as Data hiding.
// The goal is to implement in a way that prevent unauthorized access to or modification of the original contents of a class by its instances(or objects) The underlying algorithms of one class need not be known to another class. The two classes can still communicate, though.

// Access Modifiers: 
    // way to define access to the data and methods of a class.
    // Public:
        // members declared as private are accessible only within the same class.
        // they are not accessible from outside the class, including derived classes.
    // Private:
        // members declared as private are accessible only within the same class.
        // they are not accessible from outside the class, including derievd classes.
    // Protected:
        // members declared as protected are accessible within the same class and by derived classes. 
        // they are not directly accessible from external code.

// Perfect Encapsulation:
    // 1)if all data members/ variables are private.
    // 2)handling access to encapsulated data
        // despite encapsulation, external interaction is necessary.
        // implementation of public methods, such as getters and setters, allows external communication.
        // These methods enable controlled access to the encapsulated data.



// #include<iostream>
// using namespace std;

// class Student{
// public:
//     // Attribute / Variables / Properties
//     int id;
//     int age;
//     string name;
//     int nos;
// private:
//     int *gpa;
//     string gf;

// public:
//     // Constructor : Default
//     Student(){
//         cout<<"Student default constructor called"<<endl;
//     }

//     // Parameterized Constructor
//     Student(int id, int age, string name, int nos, float gpa, string gf){
//         cout<<name<<" Student Parameterized constructor called"<<endl;
//         this->id=id;
//         this->age=age;
//         this->name=name;
//         this->nos=nos;
//         this->gpa=new int(gpa);
//         this->gf=gf;
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
//         delete this->gpa;
//         cout<<"Gpa destructor called"<<endl;
//     }

// private:
//     void gfchatting(){
//         cout<<this->name<<" Chatting with gf"<<endl;
//     }

// };

// int main(){

//     Student A(1, 12, "Kaif", 6, 8.5, "Jenny");

//     cout<<A.age<<endl;
//     cout<<A.gf<<endl;
//     A.sleep();
//     A.gfchatting();
//     return 0;
// }






// PERFECT ENCAPSULATION EXAMPLE:

#include<iostream>
using namespace std;

class Student{
private:
    // Attribute / Variables / Properties
    int id;
    int age;
    string name;
    int nos;
    float *gpa;
    string gf;

public:

    void setGpa(float a){
        // Layer of authentication
        *this->gpa=a;
    }

    float getGpa() const{
        return *this->gpa;
    }

    float getAge() const{
        return this->age;
    }

    // Constructor : Default
    Student(){
        cout<<"Student default constructor called"<<endl;
    }

    // Parameterized Constructor
    Student(int id, int age, string name, int nos, float gpa, string gf){
        cout<<name<<" Student Parameterized constructor called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
        this->gpa=new float(gpa);
        this->gf=gf;
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

private:
    void gfchatting(){
        cout<<this->name<<" Chatting with gf"<<endl;
    }

};

int main(){

    Student A(1, 12, "Kaif", 6, 8.5, "Jenny");
    cout<<A.getGpa()<<endl;
    A.setGpa(6.7);
    cout<<A.getGpa()<<endl;
    cout<<A.getAge()<<endl;
    return 0;
}