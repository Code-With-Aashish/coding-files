#include <iostream>
using namespace std;
// Base class.
class employee
{

public:
    int id;
    float salary;
    employee(int inid)
    {
        id = inid;
        salary = 99.6589;
    }
    employee() // When you create a derive class the base class constructor are call.There are the defalt constructor is important.
    {
    }
};
// Derive class syntax:
/*class {{derived-class-name}} : {{visiblity-mode}} {{base-class-name}}
{
    class [membbers/methord/etc...]
}
*/
// Private visiblity mode : The public member of the base class is diclare as a private members of derived class.
// Public visiblity mode : The public member of the base class is diclare as a public members of derived class.

// Default visiblity mode is private.
// In any case you are not able to inharrit the private variable, functions and etc. of the base class.
// creating a programmer class derive from base class employee.
class programmer : public employee
{
    int lanuagecode;

public:
    float salary3 = 99.6589;
    programmer(int inid)
    {
        id = inid;
    }
    void getdata()
    {
        cout << id << endl;
        lanuagecode = 9;
    }
};

int main()
{
    employee ashu(1), kush(2), ashish(3);
    cout << ashu.id << endl;
    cout << ashu.salary << endl;
    cout << kush.id << endl;
    cout << kush.salary << endl;
    cout << ashish.id << endl;
    cout << ashish.salary << endl;

    programmer jha(4);
    // cout << jha.lanuagecode << endl;
    jha.getdata();
    cout << jha.salary << endl;
    // cout<<jha.id;

    return 0;
}