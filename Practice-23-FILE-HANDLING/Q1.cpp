
// First Program (Write into File)

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("student.txt");

    file << "Hello Kaif";

    file.close();
}