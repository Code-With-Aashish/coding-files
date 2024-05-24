#include <iostream>
using namespace std;
// There are many constructor in a class.
// If we have many constructor in a class then according to required constructor is invoke.
// constructor overloding : Many constructor in a class then according to required constructor is invoke.
class complex
{
    int a, b;

public:
    complex(int x = 75, int y = 98) //---> (1.constructor)
    {
        a = x;
        b = y;
    }
    // complex(int x) //---> (2.constructor)
    // {
    //     a = x;
    //     b = 0;
    // }
    // complex()
    // {
    //     a = 0;
    //     b = 0;
    // }
    void printnum()
    {
        cout << "Your complex number is : " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1(9);
    c1.printnum();
    complex c2;
    c2.printnum();
    complex c3;
    c3.printnum();
    return 0;
}