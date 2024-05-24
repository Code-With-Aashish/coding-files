#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k = i;
        for (int l = 1; l <= i; l++)
        {
            cout << k--;
        }
        k = 2;
        for (int m = 1; m <= i - 1; m++)
        {
            cout << k++;
        }
        cout << endl;
    }

    return 0;
}
