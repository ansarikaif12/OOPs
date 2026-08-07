// 📂 fstream (Read + Write)

// ⭐⭐⭐⭐☆ Placement Importance: High

// Ab tak:

// ofstream  → Sirf Write

// ifstream  → Sirf Read

// Lekin agar ek hi object se Read aur Write dono karna ho?

// 👉 fstream

// Example
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file("student.txt", ios::out);

    file << "Hello Kaif";

    file.close();
}

// Ye ofstream ki tarah write karega.

// Read Example
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     fstream file("student.txt", ios::in);

//     string s;

//     getline(file, s);

//     cout << s;

//     file.close();
// }

// Output:

// Hello Kaif
// Read + Write Together
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     fstream file("student.txt", ios::out | ios::in);

//     file << "Hello";

//     file.close();
// }

// Yahan:

// ios::out

// → Write Mode

// ios::in

// → Read Mode

// ios::out | ios::in

// → Read + Write Mode

// ⭐ Interview Point

// | (Pipe Operator) ka matlab hai:

// Dono modes ko combine karna.

// Jaise:

// ios::out | ios::in

// Matlab:

// Read + Write
// Memory Trick
// ofstream → Write Only

// ifstream → Read Only

// fstream  → Read + Write