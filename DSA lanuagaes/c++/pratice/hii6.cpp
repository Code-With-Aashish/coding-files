#include <iostream>
using namespace std;

// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int a;
    // Factorial of a number: is muntiplation of deccreasing the number by 1 to  grater than 1.
    // Example of factorial 6! = 6*5*4*3*2*1 = 720.
    cout << "Enter the number : ";
    cin >> a;
    // cout << "The factorial of " << a << " is : " << factorial(a);
    cout << "The fibonice of " << a << " is : " << fib(a);
    return 0;
}