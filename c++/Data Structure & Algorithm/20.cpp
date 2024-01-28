#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array :";
    cin >> n;
    cout << endl;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i << " index element :";
        cin >> array[i];
    }

    int larg = array[0], min = array[0];

    for (int j = 0; j < n; ++j)
    {
        if (array[j] > larg)
        {
            larg = array[j];
        }

        if (array[j] < min)
        {
            min = array[j];
        }
    }

    cout << "the larget value is : " << larg << endl;
    cout << "the lest value is : " << min << endl;

    return 0;
}