#include <iostream>
using namespace std;
// Copy constructor is the constructor those created the copy of the object.
class number
{
private:
    int a;

public:
    number()

    {
        a = 0;
    } // Blank constructor is impotant in a program.

    number(int num)
    {
        a = num;
    }
    // when there is no copy constructor then the default copy constructor is run automaticlliy.
    number(number &obj) // copy constructor.
    {
        cout << "This is copy constructor." << endl;
        a = obj.a;
    }
    void disp()
    {
        cout << "The number is : " << a << endl;
    }
};

int main()
{
    number x, y, z, z2;
    z = 80;
    y = 60;
    x = 70;
    y.disp();
    x.disp();
    z.disp();
    // z1 shuld be same as the value off z,y or x.
    number z1(y); // This is the copy constructor.
    z1.disp();
    z2 = z; // This is not a copy constructor.
    number z3 = x;
    z3.disp(); // This is the copy constructor.

    return 0;
}