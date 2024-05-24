#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number in 1 to 7 :" << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "The case is Sunday !";
        break;
    case 2:
        cout << "The case is Monday !";
        break;
    case 3:
        cout << "The case is Tuesday !";
        break;
    case 4:
        cout << "The case is Wednesday !";
        break;
    case 5:
        cout << "The case is Thursday !";
        break;
    case 6:
        cout << "The case is Friday !";
        break;
    case 7:
        cout << "The case is Saturday !";
        break;

    default:
        cout << "Ther are no special case!!";
    }
    return 0;
}