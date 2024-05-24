#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 9, int c = 5)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printnum()
    {
        cout << "The value of data1,data2and data3 is : " << data1 << " , " << data2 <<" and "<< data3 << endl;
    }
};
int main()
{
    simple s(4);
    s.printnum();

    return 0;
}