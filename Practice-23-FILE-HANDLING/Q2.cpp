// 🎯 Placement Question 1
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("data.txt");

    file << "C++";

    file.close();
}