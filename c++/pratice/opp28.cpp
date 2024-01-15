#include <iostream>
using namespace std;
/*
case 1:
class b:public a
{
first a(constructor),then b(constructor)
};

case :2
class a : public a,public b
{
    first a(constructor) secondb(constructor)then a(constructor)
};

case 3:
class a: public b, virtual public c
{
    first c(constructor) second b(constructor) then a(constructor)
    };


*/
class Base
{
private:
    int data;

public:
    Base(int d)
    {
        data = d;
        cout << "constructor of base class.." << endl;
    }
    void printdata()
    {
        cout << "the value of data is : " << data << endl;
    }
};
class Base2

{
private:
    int data2;

public:
    Base2(int m)
    {
        data2 = m;
        cout << "constructor of base2 class.." << endl;
    }
    void printdata2()
    {
        cout << "the value of data2 is : " << data2 << endl;
    }
};
class Derive : public virtual Base, public  Base2
{
private:
    int data3;

public:
    Derive(int a, int b, int c) : Base(a), Base2(b)
    {
        data3 = c;
        cout << "derived class constructor called " << endl;
    }
    void printdata3()
    {
        cout << "the value of data3 is : " << data3 << endl;
    }
};

int main()
{
    // Base b1(7);
    // b1.printdata();

    // Base2 b2(8);
    // b2.printdata2();

    Derive d1(1,2,4);
    d1.printdata();
    d1.printdata2();
    d1.printdata3();
    
    return 0;
}