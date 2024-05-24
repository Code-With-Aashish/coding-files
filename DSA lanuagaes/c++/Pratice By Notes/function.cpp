#include <iostream>
using namespace std;

int add(int a, int b) // This is the Example of the function
{
    return a + b;
};

int add(int a, int b, int c) // This is the Example of the function Overloding
{
    return a + b + c;
};

int add(int a, int b, int c, int d)
{
    return a + b + c + d;
};

int main()
{
    cout << "The Value is: " << add(8, 5) << endl;
    cout << "The Value is: " << add(8, 5, 7) << endl;
    cout << "The Value is: " << add(8, 5, 4, 6) << endl;
    return 0;
}