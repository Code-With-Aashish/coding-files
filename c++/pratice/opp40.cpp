#include <iostream>
#include <fstream>
using namespace std;
/*
The use ful classes for working whit files in c++ are :
1. fstream base class.
2. ifstream --> derived from fstream base.
3. ofstream --> derived from fstream base.

In order to work with files in c++, you will have to open it, to open the file ther are to ways to open the file in c++ :
1. using the constructor.
2. using the member function open() of the class.
*/

int main()
{
    string str = "Aashish Bhai";
    string str2;
    // Opening the file using the constructor and Writing it.
    ofstream out("sample60.txt"); // write operation
    out << str;
    // Opening the file using the constructor and Reading from it.
    // ifstream in("sample60b.txt"); // read operation
    // // in >> str2;
    // getline(in, str2);
    // cout << str2 << endl;
    // getline(in, str2);
    // cout << str2 << endl;

    return 0;
}