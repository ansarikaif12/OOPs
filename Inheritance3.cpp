// TYPES OF INHERITANCE-----------------:

// #include<iostream>
// using namespace std;


// SINGLE INHERITANCE-------------------:

// class Employee{
//     protected:
//     string name;
//     int empid;

//     public:

//     Employee(string _name, int _empid){
//         this->name=_name;
//         this->empid=_empid;
//     }

//     void display(){
//         cout<<"Employee: "<<name<<", ID: "<<empid<<endl;
//     }
// };

// // DERIVED CLASS FOR SINGLE INHERITANCE:

// class Developer: public Employee{
//     private:
//     string programmingLang;

//     public:

//     Developer(string _name, int _empid,string _proLang): Employee(_name, _empid){
//         this->programmingLang=_proLang;
//     }

//     void show(){
//         cout<<"Specialization: Developer, Programming Language: "<<programmingLang<<endl;
//     }

// };

// int main(){
//     Developer dev("Kaif",79,"C++");
//     dev.display();
//     dev.show();
// }



// MULTIPLE INHERITANCE---------------:

// #include<iostream>
// using namespace std;

// class Employee{
//     protected:
//     string name;
//     int empid;

//     public:

//     Employee(string _name, int _empid){
//         this->name=_name;
//         this->empid=_empid;
//     }

//     void display(){
//         cout<<"Employee: "<<name<<", ID: "<<empid<<endl;
//     }

// };

// // DERIVED CLASS FOR SINGLE INHERITANCE:

// class Developer: public Employee{
//     private:
//     string programmingLang;

//     public:

//     Developer(string _name, int _empid,string _proLang): Employee(_name, _empid){
//         this->programmingLang=_proLang;
//     }

//     void show(){
//         cout<<"Specialization: Developer, Programming Language: "<<programmingLang<<endl;
//     }

// };

// // BASE CLASSES FOR MULTIPLE INHERITANCE:

// class ProjectManager{
//     protected:
//     string projectManaged;

//     public:
//     ProjectManager(string _project){
//         this->projectManaged=_project;
//     }

//     void managedProject(){
//         cout<<"Project Manager managing project: "<<projectManaged<<endl;
//     }
// };


// class TeamLead{
//     protected:
//     int teamSize;

//     public:
//     TeamLead(int _size){
//         this->teamSize=_size;
//     }

//     void leadTeam(){
//         cout<<"Team Lead leding a team of "<<teamSize<<" members."<<endl;
//     }
// };

// // DERIVED CLASS FOR MULTIPLE INHERITANCE:

// class TechLead: public Employee, public ProjectManager, public TeamLead{
//     public:

//     TechLead(string _name, int _empid,string _project,int teamsize): Employee(_name,_empid), ProjectManager(_project), TeamLead(teamsize){
        
//     }

//     void displayInfo(){
//         display();
//         managedProject();
//         leadTeam();
//     }
// };

// int main(){
//     TechLead techlead("Peter",79,"Project X",5);
//     techlead.displayInfo();
// }

// Parameter names do not need to match between base and derived classes. Only the type and value being passed matter.




// MULTILEVEL INHERITANCE------------:

// #include<iostream>
// using namespace std;

// class Employee{
//     protected:
//     string name;
//     int empid;

//     public:

//     Employee(string _name, int _empid){
//         this->name=_name;
//         this->empid=_empid;
//         cout<<__FUNCTION__<<endl;
//     }

//     void display(){
//         cout<<"Employee: "<<name<<", ID: "<<empid<<endl;
//     }

// };

// // DERIVED CLASS FOR SINGLE INHERITANCE:

// class Developer: public Employee{
//     private:
//     string programmingLang;

//     public:

//     Developer(string _name, int _empid,string _proLang): Employee(_name, _empid){
//         this->programmingLang=_proLang;
//     }

//     void show(){
//         cout<<"Specialization: Developer, Programming Language: "<<programmingLang<<endl;
//     }

// };

// // BASE CLASSES FOR MULTIPLE INHERITANCE:

// class ProjectManager{
//     protected:
//     string projectManaged;

//     public:
//     ProjectManager(string _project){
//         this->projectManaged=_project;
//     }

//     void managedProject(){
//         cout<<"Project Manager managing project: "<<projectManaged<<endl;
//     }
// };


// class TeamLead{
//     protected:
//     int teamSize;

//     public:
//     TeamLead(int _size){
//         this->teamSize=_size;
//     }

//     void leadTeam(){
//         cout<<"Team Lead leding a team of "<<teamSize<<" members."<<endl;
//     }
// };

// // DERIVED CLASS FOR MULTIPLE INHERITANCE:

// class TechLead: public Employee, public ProjectManager, public TeamLead{
//     public:

//     TechLead(string _name, int _empid,string _project,int teamsize): Employee(_name,_empid), ProjectManager(_project), TeamLead(teamsize){
        
//     }

//     void displayInfo(){
//         display();
//         managedProject();
//         leadTeam();
//     }
// };

// // BASE CLASS FOR MULTI-LEVEL INHERITANCE:

// class HRManager: public Employee{
//     public:
//     HRManager(string name, int empid):Employee(name,empid){
//         cout<<__FUNCTION__<<endl;   //isse function ka name call ho jayega 
//     }

//     void handleDuties(){
//         cout<<"HR Manager handling human resources duties."<<endl;
//     }
// };

// // DERIVED CLASS FOR MULTI-LEVEL INHERITANCE:

// class HRDirector:public HRManager{
//     public:
//     HRDirector(string name, int empid):HRManager(name,empid){
//         cout<<__FUNCTION__<<endl; //isse function ka name call ho jayega 
//     }

//     void manageHRDepartment(){
//         cout<<"HR Director managing the HR Department."<<endl;
//     }
// };

// int main(){
//     HRDirector hrdirector("Kaif Sir",79);
//     hrdirector.handleDuties();
//     hrdirector.manageHRDepartment();
// }




// HIERARCHICAL INHERITANCE-----------:


// MULTILEVEL INHERITANCE------------:

#include<iostream>
using namespace std;

class Employee{
    protected:
    string name;
    int empid;

    public:

    Employee(string _name, int _empid){
        this->name=_name;
        this->empid=_empid;
        cout<<__FUNCTION__<<endl;
    }

    void display(){
        cout<<"Employee: "<<name<<", ID: "<<empid<<endl;
    }

};

// DERIVED CLASS FOR SINGLE INHERITANCE:

class Developer: public Employee{
    private:
    string programmingLang;

    public:

    Developer(string _name, int _empid,string _proLang): Employee(_name, _empid){
        this->programmingLang=_proLang;
    }

    void show(){
        cout<<"Specialization: Developer, Programming Language: "<<programmingLang<<endl;
    }

};

// BASE CLASSES FOR MULTIPLE INHERITANCE:

class ProjectManager{
    protected:
    string projectManaged;

    public:
    ProjectManager(string _project){
        this->projectManaged=_project;
    }

    void managedProject(){
        cout<<"Project Manager managing project: "<<projectManaged<<endl;
    }
};


class TeamLead{
    protected:
    int teamSize;

    public:
    TeamLead(int _size){
        this->teamSize=_size;
    }

    void leadTeam(){
        cout<<"Team Lead leding a team of "<<teamSize<<" members."<<endl;
    }
};

// DERIVED CLASS FOR MULTIPLE INHERITANCE:

class TechLead: public Employee, public ProjectManager, public TeamLead{
    public:

    TechLead(string _name, int _empid,string _project,int teamsize): Employee(_name,_empid), ProjectManager(_project), TeamLead(teamsize){
        
    }

    void displayInfo(){
        display();
        managedProject();
        leadTeam();
    }
};

// BASE CLASS FOR MULTI-LEVEL INHERITANCE:

class HRManager: public Employee{
    public:
    HRManager(string name, int empid):Employee(name,empid){
        cout<<__FUNCTION__<<endl;   //isse function ka name call ho jayega 
    }

    void handleDuties(){
        cout<<"HR Manager handling human resources duties."<<endl;
    }
};

// DERIVED CLASS FOR MULTI-LEVEL INHERITANCE:

class HRDirector:public HRManager{
    public:
    HRDirector(string name, int empid):HRManager(name,empid){
        cout<<__FUNCTION__<<endl; //isse function ka name call ho jayega 
    }

    void manageHRDepartment(){
        cout<<"HR Director managing the HR Department."<<endl;
    }
};


// BASE CLASS FOR HIERARCHICAL INHERITANCE:

class Executive: public Employee{
    public:
    Executive(string _name,int _id): Employee(_name, _id){
        cout<<__FUNCTION__<<endl;
    }

    void makeExceutiveDecisions(){
        cout<<"Executive making executive decisions"<<endl;
    }
};

// DERIVED CLASS FOR HIERARCHICAL INHERTANCE:

class CEO:public Executive{
    public:
    CEO(string name, int id):Executive(name, id){
        cout<<__FUNCTION__<<endl;
    }

    void leadCompany(){
        makeExceutiveDecisions();
        cout<<"CEO leading the company."<<endl;
    }
};

int main(){
    CEO ceo("Kaif Ansari",79);
    ceo.leadCompany();
}
