#include <iostream>
using namespace std;
class c2;

class c1
{
    int val;

public:
    void intdata(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout << "The value of a is : " << val << endl;
    }
    friend void exchange(c1 &x, c2 &y);
};
class c2
{
    int val1;

public:
    void intdata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << "The value of b is : " << val1 << endl;
    }
    friend void exchange(c1 &x, c2 &y);
};
void exchange(c1 &x, c2 &y) // whe we remove (&) the the copy of variable can enter the function.And the value is can't swap.It return as it is.
{
    int temp = x.val;
    x.val = y.val1;
    y.val1 = temp;
}

int main()
{
    c1 ashu;
    ashu.intdata(88);
    c2 kush;
    kush.intdata(55);
    cout << "The value after exchange :" << endl;
    ashu.display();
    kush.display();

    cout << "The value before exchange :" << endl;

    exchange(ashu, kush);
    ashu.display();
    kush.display();

    return 0;
}