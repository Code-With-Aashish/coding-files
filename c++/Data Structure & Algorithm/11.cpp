#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int num)
{
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The following number is prime number.";

    for (int i = a; i <= b; i++)
    {
        if (isprime(i) == true)
        {
            cout << i << endl;
        }
    }

    return 0;
}