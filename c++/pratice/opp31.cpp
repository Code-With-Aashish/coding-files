#include <iostream>
using namespace std;
class Complex
{
    int Real, Imaginary;

public:
    void SetData(int a, int b)
    {
        Real = a;
        Imaginary = b;
    }
    void PrintData()
    {
        cout << "Your complex number is : " << Real << " + " << Imaginary << "i" << endl;
    }
};
int main()
{
    // Complex c;
    // Complex *ptr = &c;
    // Complex *ptr = new Complex;
    // //(*ptr).SetData(9, 3); // the this() type of bracakets is important while using the pointers in class. This is same as line 24.
    // ptr->SetData(9, 3);
    // //(*ptr).PrintData(); // the this() type of bracakets is important while using the pointers in class.
    // ptr->PrintData(); // the this() type of bracakets is important while using the pointers in class.

    // Arrays in Objecte orinted programming in c++.
    Complex *ptr = new Complex[4]; // this ia creating a {4} new object in class Complex.
    ptr[0].SetData(9, 3);
    ptr[1].SetData(2, 7);
    ptr[2].SetData(9, 7);
    ptr[3].SetData(2, 4);
    ptr[4].SetData(8, 4);
    ptr[5].SetData(5, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
        ptr[i].PrintData();
    }

    return 0;
}