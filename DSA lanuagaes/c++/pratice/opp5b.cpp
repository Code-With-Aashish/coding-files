#include <iostream>
using namespace std;

class complexnum
{
private:
    int a, b;

public:
    void setdata(int v1, int v2);
    void setdatabysum(complexnum o1, complexnum o2);
    void ptintnum();
};

void complexnum::setdata(int v1, int v2)
{
    a = v1;
    b = v2;
}

void complexnum::setdatabysum(complexnum o1, complexnum o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}



void complexnum::ptintnum()
{
    cout << "Your complex number is : " << a << " + " << b << "i" << endl;
}

int main()
{
    complexnum c1, c2, c3;
    c1.setdata(4, 5);
    c1.ptintnum();

    c2.setdata(8, 9);
    c2.ptintnum();

    c3.setdatabysum(c1, c2);
    c3.ptintnum();
    
    

    return 0;
}
