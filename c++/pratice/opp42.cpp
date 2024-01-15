#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");

    // out << "tjoio\n";
    out << "hii\n";
    out << " my\n";
    out << " is\n";
    out << " Ashihs\n";
    out.close();

    ifstream in;
    string st;
    in.open("sample.txt");
    // getline(in, st);
    cout << st << endl;
    // getline(in, st);
    // cout << st << endl;
    // getline(in, st);
    // cout << st << endl;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st;
    }

    in.close();

    return 0;
}