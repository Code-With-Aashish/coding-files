#include <iostream>
using namespace std;
// structure in c++.
// typedef struct normal
// {
//     int eId;
//     char favchar;
//     float salary;
// } no;

// union
union money
{
    int rice;
    char car;
    float pound;
};

// normal code of c++.
int main()
{
    enum meal
    {
        lunch,
        breakfast,
        dinner
    };
    meal m1 = lunch;
    cout << (m1 == 0);
    // cout<<unch<<endl;
    // cout<<breakfast<<endl;
    // cout<<dinner<<endl;

    // example of union.
    // union money m1;
    // m1.rice = 56;
    // m1.car = 'c';
    // cout << m1.car;

    // no ashish;
    // ashish.eId = 10;
    // ashish.favchar = 'd';
    // ashish.salary = 12000;
    // cout << "the salary is " << ashish.salary << endl;
    // cout << "the favchar is " << ashish.favchar << endl;
    // cout << "the id is " << ashish.eId << endl;

    return 0;
}