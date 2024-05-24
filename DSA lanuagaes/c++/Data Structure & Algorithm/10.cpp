#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int originaln = n;
    int sum = 0;
    while (n > 0)
    {
        int last = n % 10;
        sum += pow(last, 3);
        n /= 10;
    }

    if (sum == originaln)
    {
        cout << "This number is an Armstrong number" << endl;
    }
    else
    {
        cout << "This number is not an Armstrong number" << endl;
    }

    return 0;
}
