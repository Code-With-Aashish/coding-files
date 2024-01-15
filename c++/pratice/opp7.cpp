#include <iostream>
using namespace std;
// To use forword diclearation.
class complex;
// Another class want to ues th private variable of class complex.
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    // Function to access private variables of the complex class. 
    int sumcomplex(complex o1, complex o2); // It means that the sumcomplex function is the below of the class.first we want to create the function and then below the classes we diclare the function.
    int sumcomplex1(complex o1, complex o2);
    int sumallcomplex(complex o1, complex o2);
};

class complex
{
private:
    int a, b;


    // Indiuvusally bing a friend ot the function.
    // friend int calculator ::sumcomplex(complex o1, complex o2); // getting acess to the calculator class to acess the private variable of class complex.
    // friend int calculator ::sumcomplex1(complex o1, complex o2);
    // friend int calculator ::sumallcomplex(complex o1, complex o2);


    // Aonther methord : diclerating the class as a friend.
    friend class calculator;

public:
    void setmunber(int n1, int n2);
    void printnum(void);
};

void complex ::setmunber(int n1, int n2)
{
    a = n1;
    b = n2;
}

void complex ::printnum()
{
    cout << "Your complex number is " << a << " + " << b << "i" << endl;
}

// Implementation of the sumcomplex function and diclearing the function.
int calculator::sumcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcomplex1(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int calculator ::sumallcomplex(complex o1, complex o2)
{
}

int main()
{
    complex o1, o2;
    o1.setmunber(5, 7);
    o1.printnum();

    o2.setmunber(8, 5);
    o2.printnum();

    calculator ashu;
    int res = ashu.sumcomplex(o1, o2);
    int res1 = ashu.sumcomplex1(o1, o2);
    cout << "The sum of real part of complex number is : " << res << endl;
    cout << "The sum of cpmplex part of complex number is : " << res1 << "i" << endl;
    cout << "The sum of complex number is :" << res << " + " << res1 << "i" << endl;
    return 0;
}