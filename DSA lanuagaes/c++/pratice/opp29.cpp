#include <iostream>
using namespace std;
/*
class Test {
    int a, b;
    public:
        Test (int i, int j) : a(i), b(j){
            Body of constructor....
        }
};
*/
class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(j*i), b(i+j)
    // Test(int i, int j) : a(i), b(a + j)
    {
        cout << "Hello World !!" << endl;
        cout << "the value of a is :" << a << endl;
        cout << "the value of b is :" << b << endl;
    }
};
int main()
{
    Test t(2, 5);

    return 0;
}