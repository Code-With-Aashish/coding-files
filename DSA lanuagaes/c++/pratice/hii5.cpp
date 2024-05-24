#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// call by reference using pointer.
// void swapPointer(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// call by referencce variable.

// int &  swapreferencevar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     // return a;
// }
void swapreferencevar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//  This will not swap the value of a and b.
//  void swappointer ( int a, int b) {
//  int temp = a;
// R a = b;
//  b = temp;
// }

int main()
{
    int a = 4, b = 5;
    // cout << "The sum of 4 and 5 is : " << sum( a, b);
    cout << "a is " << a << "  b is " << b << endl;
    // swapPointer(&a, &b); using swapPointer.
    // swapreferencevar (a, b) = 766;
    swapreferencevar(&a, &b);
    // swap( a, b);
    cout << "a is " << a << "  b is " << b << endl;

    return 0;
}
