#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = (n * (n + 1)) / 2;
    cout << "The sum of " << n << " natural number is :" << s;
    return 0;
}