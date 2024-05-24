#include <iostream>
using namespace std;

// function prototye

// sintax

// int sum (int a,int b);---acceptable
// int sum (int a, b);---unacceptable
int sum(int, int); //---acceptable
//void g(void);//---acceptable
void g();//---acceptable

    int main()
{
    int num1, num2; // num1 and num2 is the actualparimeter
    cout << "Enter the first value :";
    cin >> num1;
    cout << "Enter the second value :";
    cin >> num2;
    cout << "The sum is :" << sum(num1, num2); // exchang the value to calling an a function
    g();
    return 0;
}

int sum(int a, int b)
{
    // a and b is the formalparameter taking values from actual parameter is num1 and num2.
    int c = a + b;
    return c;
}
void g()
{
    cout <<endl<< "hello, Good Mirning";
}
