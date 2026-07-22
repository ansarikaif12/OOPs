// Inheritence:
    // similar to inheritance in life.
    // child inherits attribute and behaviour from parent.
    // inheritance is a way to create a class from existing class.
    // the derived/child/sub class inherits some attributes and behiour from base/parent/super class, and may have more specialised attributes and behaviours.

// Private : -
// Public: +
// Protected: #


// Protected members:
    // 1) members declared protected are accessible within class itself & to its derived class.
    // 2) the protected access modifier serves two primary purposes:
        // 1) Encapsulation: like the private access modifier, protected provides a level of encapsulation, ensuring that certain class members are not directly accessible from outsside the class. This promotes data hiding and prevents external code from modifying or accessing sensitive data directly.
        // 2) Inheritence: Unlike private, protected members can be inherited by derived classes, This means the subclasses have limited access to these members, allowing them to build upon the base class's functionality while maintaining some level of data integrity and control.


// Mode of Inheritence important hai concept, pdh lena

// TYPES OF INHERITENCE:
    // 1) single inheritance
    // 2) multilevel inheritance
    // 3) hierarchical inheritance
    // 4) multiple inheritance
    // 5) hybrid inheritance

// Advantages:
    // 1) Reusability
    // 2) Code modification
    // 3) Extensibility
    // 4) Data Hiding


// MODE OF INHERITANCE: PUBLIC

// code ki reusability ko smjhenge phle

// child class banne se pahle hmesha base class ka constructor call hota hai 

// #include<iostream>
// using namespace std;

// class Vehicle{
//     public:
//     string name;
//     string model;
//     int noOfTyres;

//     Vehicle(string n, string m, int nOT){
//         cout<<"I am inside Vehicle Constructor"<<endl;
//         this->name=n;
//         this->model=m;
//         this->noOfTyres=nOT;
//     }

//     public:
//     void start_engine(){
//         cout<<"Engine is starting "<<name<<" "<<model<<endl;
//     }

//     void stop_engine(){
//         cout<<"Engine is stoping "<<name<<" "<<model<<endl;
//     }
// };


// class Car:public Vehicle{
//     public:
//     int noOfDoors;
//     string transmissionType;

//     Car(string n, string m, int nOT, int nOD, string t):Vehicle(n, m, nOT){
//         cout<<"I am inside Car Constructor"<<endl;
//         this->noOfDoors=nOD;
//         this->transmissionType=t;
//     }

//     void startAC(){
//         cout<<"AC has started of "<<name<<endl;
//     }
// };


// int main(){
//     Car A("Maruti 800", "LXI", 4, 4, "Manual");
//     A.start_engine();
//     A.startAC();
//     A.stop_engine();
// }





// #include<iostream>
// using namespace std;

// class Vehicle{
//     private:
//     string name;

//     public:
//     string model;
//     int noOfTyres;

//     Vehicle(string n, string m, int nOT){
//         cout<<"I am inside Vehicle Constructor"<<endl;
//         this->name=n;
//         this->model=m;
//         this->noOfTyres=nOT;
//     }

//     public:
//     void start_engine(){
//         cout<<"Engine is starting "<<name<<" "<<model<<endl;
//     }

//     void stop_engine(){
//         cout<<"Engine is stoping "<<name<<" "<<model<<endl;
//     }
// };


// class Car:public Vehicle{
//     public:
//     int noOfDoors;
//     string transmissionType;

//     Car(string n, string m, int nOT, int nOD, string t):Vehicle(n, m, nOT){
//         cout<<"I am inside Car Constructor"<<endl;
//         this->noOfDoors=nOD;
//         this->transmissionType=t;
//     }

//     void startAC(){
//         cout<<"AC has started of "<<name<<endl;
//     }
// };


// int main(){
//     Car A("Maruti 800", "LXI", 4, 4, "Manual");
//     A.start_engine();
//     A.startAC();
//     A.stop_engine();
// }








// #include<iostream>
// using namespace std;

// class Vehicle{
//     private:
//     string name;

//     public:
//     string model;
//     int noOfTyres;

//     string getName(){
//         return this->name;
//     }

//     Vehicle(string n, string m, int nOT){
//         cout<<"I am inside Vehicle Constructor"<<endl;
//         this->name=n;
//         this->model=m;
//         this->noOfTyres=nOT;
//     }

//     public:
//     void start_engine(){
//         cout<<"Engine is starting "<<name<<" "<<model<<endl;
//     }

//     void stop_engine(){
//         cout<<"Engine is stoping "<<name<<" "<<model<<endl;
//     }
// };


// class Car:public Vehicle{
//     public:
//     int noOfDoors;
//     string transmissionType;

//     Car(string n, string m, int nOT, int nOD, string t):Vehicle(n, m, nOT){
//         cout<<"I am inside Car Constructor"<<endl;
//         this->noOfDoors=nOD;
//         this->transmissionType=t;
//     }

//     void startAC(){
//         cout<<"AC has started of "<<getName()<<endl;
//     }
// };


// int main(){
//     Car A("Maruti 800", "LXI", 4, 4, "Manual");
//     A.start_engine();
//     A.startAC();
//     A.stop_engine();
// }






// #include<iostream>
// using namespace std;

// class Vehicle{
//     protected:
//     string name;

//     public:
//     string model;
//     int noOfTyres;

//     string getName(){
//         return this->name;
//     }

//     Vehicle(string n, string m, int nOT){
//         cout<<"I am inside Vehicle Constructor"<<endl;
//         this->name=n;
//         this->model=m;
//         this->noOfTyres=nOT;
//     }

//     public:
//     void start_engine(){
//         cout<<"Engine is starting "<<name<<" "<<model<<endl;
//     }

//     void stop_engine(){
//         cout<<"Engine is stoping "<<name<<" "<<model<<endl;
//     }
// };


// class Car:public Vehicle{
//     public:
//     int noOfDoors;
//     string transmissionType;

//     Car(string n, string m, int nOT, int nOD, string t):Vehicle(n, m, nOT){
//         cout<<"I am inside Car Constructor"<<endl;
//         this->noOfDoors=nOD;
//         this->transmissionType=t;
//     }

//     void startAC(){
//         cout<<"AC has started of "<<name<<endl;
//     }
// };


// int main(){
//     Car A("Maruti 800", "LXI", 4, 4, "Manual");
//     A.start_engine();
//     A.startAC();
//     A.stop_engine();
//     // cout<<A.name()<<endl;

//     // Vehicle v;
//     // v.name;
// }



// MODE OF INHERITANCE: PROTECTED



// #include<iostream>
// using namespace std;

// class Vehicle{
//     protected:
//     string name;

//     public:
//     string model;
//     int noOfTyres;

//     string getName(){
//         return this->name;
//     }

//     Vehicle(string n, string m, int nOT){
//         cout<<"I am inside Vehicle Constructor"<<endl;
//         this->name=n;
//         this->model=m;
//         this->noOfTyres=nOT;
//     }

//     public:
//     void start_engine(){
//         cout<<"Engine is starting "<<name<<" "<<model<<endl;
//     }

//     void stop_engine(){
//         cout<<"Engine is stoping "<<name<<" "<<model<<endl;
//     }
// };


// class Car:protected Vehicle{
//     public:
//     int noOfDoors;
//     string transmissionType;

//     Car(string n, string m, int nOT, int nOD, string t):Vehicle(n, m, nOT){
//         cout<<"I am inside Car Constructor"<<endl;
//         this->noOfDoors=nOD;
//         this->transmissionType=t;
//     }

//     void startAC(){
//         cout<<"AC has started of "<<name<<endl;
//     }
// };


// int main(){
//     Car A("Maruti 800", "LXI", 4, 4, "Manual");
//     A.start_engine();
//     A.startAC();
//     A.stop_engine();
//     // cout<<A.name()<<endl;

//     // Vehicle v;
//     // v.name;
// }





// #include<iostream>
// using namespace std;

// class Vehicle{
//     public:
//     string name;
//     string model;
//     int noOfTyres;

//     string getName(){
//         return this->name;
//     }

//     Vehicle(string n, string m, int nOT){
//         cout<<"I am inside Vehicle Constructor"<<endl;
//         this->name=n;
//         this->model=m;
//         this->noOfTyres=nOT;
//     }

//     public:
//     void start_engine(){
//         cout<<"Engine is starting "<<name<<" "<<model<<endl;
//     }

//     void stop_engine(){
//         cout<<"Engine is stoping "<<name<<" "<<model<<endl;
//     }
// };


// class Car:private Vehicle{
//     public:
//     int noOfDoors;
//     string transmissionType;

//     Car(string n, string m, int nOT, int nOD, string t):Vehicle(n, m, nOT){
//         cout<<"I am inside Car Constructor"<<endl;
//         this->noOfDoors=nOD;
//         this->transmissionType=t;
//     }

//     void startAC(){
//         cout<<"AC has started of "<<name<<endl;
//     }
// };


// int main(){
//     Car A("Maruti 800", "LXI", 4, 4, "Manual");
//     A.start_engine();
//     A.name;
//     A.startAC();
//     A.stop_engine();
//     // cout<<A.name()<<endl;

//     // Vehicle v;
//     // v.name;
// }






// #include<iostream>
// using namespace std;

// class Vehicle{
//     protected:
//     string name;
//     string model;
//     int noOfTyres;

//     public:

//     Vehicle(string n, string m, int nOT){
//         cout<<"I am inside Vehicle Constructor"<<endl;
//         this->name=n;
//         this->model=m;
//         this->noOfTyres=nOT;
//     }

//     void start_engine(){
//         cout<<"Engine is starting "<<name<<" "<<model<<endl;
//     }

//     void stop_engine(){
//         cout<<"Engine is stoping "<<name<<" "<<model<<endl;
//     }
// };


// class Car:public Vehicle{
//     public:
//     int noOfDoors;
//     string transmissionType;

//     Car(string n, string m, int nOT, int nOD, string t):Vehicle(n, m, nOT){
//         cout<<"I am inside Car Constructor"<<endl;
//         this->noOfDoors=nOD;
//         this->transmissionType=t;
//     }

//     void startAC(){
//         cout<<"AC has started of "<<name<<endl;
//     }
// };


// int main(){
//     Car A("Maruti 800", "LXI", 4, 4, "Manual");
//     A.start_engine();
//     A.name;
//     A.startAC();
//     A.model;
//     A.stop_engine();
//     // cout<<A.name()<<endl;

//     // Vehicle v;
//     // v.name;
// }



// Now we move to code extensibility