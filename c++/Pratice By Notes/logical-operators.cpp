#include <iostream>
using namespace std;
// && case : if the both condition is true then the function is running
// || case : if anyone condition is true then the function is running
// != case : is the opposite of the condition
int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    // logical operatos

    // if (age > 0 && age < 100) // both conditions are cheaking
    // {
    //     cout << "This is the valid age: " << age << endl;
    // }
    // if (age > 0 || age < 100) // only one condition is cheak
    // {
    //     cout << "This is the valid age: " << age << endl;
    // }
    // else
    // {
    //     cout << "This is not the valid age: " << age << endl;
    // }

    // uniary operatos

    cout << age << endl;
    age++; // same as ++age  increases the value by 1
    cout << age << endl;
    age--; // same as --age decrease the value by 1
    cout << age << endl;

    return 0;
}