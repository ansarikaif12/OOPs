// 3) Hierarchical Inheritance

#include<iostream>
using namespace std;

class Vehicle{
    protected:
    string name;
    string model;
    int noOfTyres;

    public:

    Vehicle(string n, string m, int nOT){
        cout<<"I am inside Vehicle Constructor"<<endl;
        this->name=n;
        this->model=m;
        this->noOfTyres=nOT;
    }

    void start_engine(){
        cout<<"Engine is starting "<<name<<" "<<model<<endl;
    }

    void stop_engine(){
        cout<<"Engine is stoping "<<name<<" "<<model<<endl;
    }

    ~Vehicle(){
        cout<<"I am inside Vehicle Destructor"<<endl;
    }
};


class Car:public Vehicle{
    protected:
    int noOfDoors;
    string transmissionType;

    public:
    Car(string n, string m, int nOT, int nOD, string t):Vehicle(n, m, nOT){
        cout<<"I am inside Car Constructor"<<endl;
        this->noOfDoors=nOD;
        this->transmissionType=t;
    }

    void startAC(){
        cout<<"AC has started of "<<name<<endl;
    }

    ~Car(){
        cout<<"I am inside Car Destructor"<<endl;
    }
};


class MotorCycle: public Vehicle{
    protected:
    string handleBarStyle;
    string suspensionType;

    public:

    MotorCycle(string n, string m, int nOT, string h, string s): Vehicle(n, m, nOT){
        cout<<"Motorcyle Constructor called"<<endl;
        this->handleBarStyle=h;
        this->suspensionType=s;
    }

    void wheele(){
        cout<<"Wheele kar rahi hai "<<name<<endl;
    }

    ~MotorCycle(){
        cout<<"I am inside MotorCycle Destructor"<<endl;
    }

};

int main(){
    Car A("Maruti 800", "LXI", 4, 4, "Manual");
    A.start_engine();
    A.startAC();
    A.stop_engine();
    
    MotorCycle M("BMW","VXI",2,"U","Hard");
    M.start_engine();
    M.wheele();
    M.stop_engine();
}


// jab bhi ham derived class ka object bnayenge to wo sabse phle base class ka constructor call hoga aur fr derived class ka constructor call hoga but jab ham destruction kr rhe honge to sabse phle derived class ka detruction call hoga then base class ka hoga call


// agar hamne constructor ko private rkha hai to class ka object nhi banega, error through krega.