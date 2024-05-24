#include <iostream>
using namespace std;

class bank
{
    int principal;
    int year;
    float interest;
    float returnval;

public:
    bank() {}
    bank(int p, int y, float r);
    bank(int p1, int y1, int R);
    void show();
};

bank::bank(int p, int y, float r)
{
    principal = p;
    year = y;
    interest = r;
    returnval = principal;

    for (int i = 0; i < y; i++)
    {
        returnval = returnval * (1 + r);
    }
}
// bank::bank(int p1, int y1, int R)
// {
//     principal = p1;
//     year = y1;
//     interest = R;
//     returnval = principal;

//     for (int i = 0; i < y1; i++)
//     {
//         returnval = returnval * (1 + R);
//     }
// }

void bank::show()
{
    cout << endl
         << "Principal amount is: " << principal << endl
         << "The return value after " << year << " years" << endl
         << "The amount is: " << returnval << endl;
}

int main()
{
    bank b1, b2, b3;
    int p, y;
    float r;
    b3.show();
    cout << "Enter the principal:" << endl;
    cin >> p;
    cout << "Enter the year:" << endl;
    cin >> y;
    cout << "Enter the rate:" << endl;
    cin >> r;

    bank b1(p, y, r);
    b1.show();

    // int p1, y1;
    // int R;
    // cout << "Enter the principal:" << endl;
    // cin >> p1;
    // cout << "Enter the year:" << endl;
    // cin >> y1;
    // cout << "Enter the rate:" << endl;
    // cin >> R;

    // bank b2(p1, y1, R);

    return 0;
}
