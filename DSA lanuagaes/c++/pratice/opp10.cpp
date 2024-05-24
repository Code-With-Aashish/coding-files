#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int , int);
    int printnum()
    {
        cout << "Your complex number is : " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x, int y) //---> This is paramerersided constructor. It takes 2 parameter.
{
    a = x;
    b = y;
}

int main()
{
    // inplicit call.
    complex a(4,5);
    // explicit call.
    complex b = complex(8,6);
    a.printnum();
    b.printnum();
    return 0;
}