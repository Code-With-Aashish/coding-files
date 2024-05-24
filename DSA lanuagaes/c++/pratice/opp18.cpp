#include <iostream>
using namespace std;
// This is the example of single inhiratence.
class base
{
    int data1; // This is private and it not inheritanle.

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}

class base1 : public base // class is being derive publically.
{
    int data3;

public:
    void proesses();
    void display();
};
void base1::proesses()
{
    // setdata();
    data3 = data2 * getdata1();
}
void base1::display()
{
    cout << "value of data1 is " << getdata1() << endl;
    cout << "value of data2 is " << data2 << endl;
    cout << "value of data3 is " << data3 << endl;
}

int main()
{
    base1 bse;
    bse.setdata();
    bse.proesses();
    bse.display();

    return 0;
}