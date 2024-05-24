#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name, str, str2;
    str2 = " My name is : ";

    // Connecting our file to c++ program.
    ofstream Aout("sample60.txt");

    // Creating the name variable Enter by user.
    cout << "Enter Your name : ";
    cin >> name;
    cout << endl;
    // Stored the name in our file those we are connected to c++ program.
    Aout << str2 + name;

    // Colseing the file
    Aout.close(); // file se nata tut gaya.

    // Displaying the contant thos in the file of sample60.txt
    ifstream Ain("sample60.txt");
    // Ain >> str;
    getline(Ain, str); // this line is use to print the whole line that is written the file.
    cout << str;
    Ain.close();

    return 0;
}