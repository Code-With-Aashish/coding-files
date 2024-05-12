#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, BinaryNumber;
    cout << "Enter the lennth of the binary number :" << endl;
    cin >> n;

    if (n >= 4)
    {

        int arry[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the value of the binary number at " << i << " position " << endl;
            cin >> arry[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arry[i] != 0 && arry[i] != 1)
            {
                cout << " Invalid input! " << endl;
                return 0;
            }
        }

        cout << "The number is the valid binary number !!" << endl;
        cout << endl;
        BinaryNumber = 0;
        for (int i = 0; i < n; i++)
        {
            int j = pow(2, i);
            BinaryNumber = arry[i] * BinaryNumber + j;
        }

        cout << "The binary to decimal conversion is " << BinaryNumber;
    }
    else if (n == 3)
    {
        int arry[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the value of the binary number at " << i << " position " << endl;
            cin >> arry[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arry[i] != 0 && arry[i] != 1)
            {
                cout << " Invalid input! " << endl;
                return 0;
            }
        }

        cout << "The number is the valid binary number !!" << endl;
        cout << endl;
        BinaryNumber = 0;
        for (int i = 0; i < n; i++)
        {
            int j = pow(2, i);
            BinaryNumber = arry[i] * BinaryNumber + j;
        }

        cout << "The binary to decimal conversion is " << BinaryNumber;
    }

    else
    {
        cout << endl;
        cout << "Please Enter at least the Three Bit Binary Number !!" << endl;
    }

    return 0;
}