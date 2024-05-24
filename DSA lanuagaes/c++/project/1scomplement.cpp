#include <iostream>
#include <string> // while using string we want to inplment the {#include<string>}
using namespace std;

class binary
{
    // default all variable are as private.
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onescomplement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the binary number : " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++) // {s.lenth()} is the methord to find the lenth  of an string.
    {
        if (s.at(i) != '0' && s.at(i) != '1') // && ---> is the logical and gate.
        {
            cout << " Invalid input! " << endl;
            exit(0);
        }
    }
}

void binary ::onescomplement()
{
    // chk_bin(); // this is the example of nexting of function.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "Binary number: " << s << endl;
}
int main() // main program was started from main function.
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.onescomplement();
    b.display();

    return 0;
}