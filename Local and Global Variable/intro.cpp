// Global Varible==========
    // 1) written outside a function.
    // 2) Accessible to all function (same copy)

// Local Varibel===========
    // 1) written inside a function
    // 2) Accessible inside thats function scope only.


// #include<iostream>
// using namespace std;
// int x=2; //GLOBAL VARIABLE
// int main(){
//     cout<<x<<endl;
// }


// #include<iostream>
// using namespace std;
// int x=2; //GLOBAL VARIABLE
// int main(){
//     x=20; // global x
//     cout<<x<<endl;
// }


//NOTE: most local varible preference is more than global variable

// #include<iostream>
// using namespace std;
// int x=2; //GLOBAL VARIABLE
// int main(){
//     x=4; //global x
//     int x=20; // local to main function
//     cout<<x<<endl; //20
// }

// NOTE: IF YOU WANT TO ACCESS THE GLOBAL VARIABLE THEN 

// #include<iostream>
// using namespace std;
// int x=2; //GLOBAL VARIABLE
// int main(){
//     x=4; //global x
//     int x=20; // local to main function
//     cout<<x<<endl; //20
//     cout<<::x<<endl; // accessing global with ::
// }

// OR

// #include<iostream>
// using namespace std;

// int x=2; //GLOBAL VARIABLE

// int main(){
//     ::x=4; //global x
//     int x=20; // local to main function
//     cout<<x<<endl; //20
//     cout<<::x<<endl; // accessing global with ::
// }




// #include<iostream>
// using namespace std;

// int x=2; //GLOBAL VARIABLE

// int main(){
//     ::x=4; //global x
//     int x=20; // local to main function
//     cout<<x<<endl; //20
//     cout<<::x<<endl; // accessing global with ::

//     {
//         int x=50;
//         cout<<x<<endl;
//         cout<<::x<<endl;
//     }
// }





// #include<iostream>
// using namespace std;

// int x=2; //GLOBAL VARIABLE


// void fun(){
//     int x=60;
//     cout<<x<<endl;
//     cout<<::x<<endl;
// }

// int main(){
//     ::x=4; //global x
//     int x=20; // local to main function
//     cout<<x<<endl; //20
//     cout<<::x<<endl; // accessing global with ::

//     {
//         int x=50;
//         cout<<x<<endl;
//         cout<<::x<<endl;
//     }

//     fun();
// }





// #include<iostream>
// using namespace std;

// int x=2; //GLOBAL VARIABLE


// void fun(){
//     int x=60;
//     cout<<x<<endl;
//     ::x=40;
//     cout<<::x<<endl;
// }

// int main(){
//     ::x=4; //global x
//     int x=20; // local to main function
//     cout<<x<<endl; //20
//     cout<<::x<<endl; // accessing global with ::

//     {
//         int x=50;
//         cout<<x<<endl;
//         cout<<::x<<endl;
//     }

//     fun();
//     cout<<::x<<endl;
// }




#include<iostream>
using namespace std;

int x=2; //GLOBAL VARIABLE

void fun(){
    int x=60;
    cout<<x<<endl;
    ::x=40;
    cout<<::x<<endl;
}

int main(){
    ::x=4; //global x
    int x=20; // local to main function
    cout<<x<<endl; //20
    cout<<::x<<endl; // accessing global with ::
    {
        int x=50;
        {
            int x=44;
            cout<<x<<endl;
        }
        cout<<x<<endl;
        cout<<::x<<endl;
    }

    fun();
    cout<<::x<<endl;
}
