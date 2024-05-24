#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor.
    // constructor is a special member function with same name as of the class.
    // It is use to intializ the object of it's class.
    // It was autimaticaly invoked(call the function). when ever an objects ic created.
    // This is important to diclare the (Name of function and constructor are same).
    complex(void); // constructor dicilaration.
    int printnum()
    {
        cout << "Your complex number is : " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // ---> This is an defalt constructor.As it not take any parameter.
{
    a = 0;
    b = 0;
}

int main()
{
    complex c;
    c.printnum();
    return 0;
}

/*
characterstick of constructor :-
1. It sould diclare in public section of the class.
2. They are automatilly invoke whenever the objectis created.
3. They cannot return value and do not have return type.
4. It can have default argument.
5. we cannot refer to their address.
*/
