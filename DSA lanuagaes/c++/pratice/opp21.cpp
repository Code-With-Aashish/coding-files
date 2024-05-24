#include <iostream>
using namespace std;
// multiple inharitence //
// sintax of multiplie inharitence //
/* class derived : visiblity-mode  base1, visiblity-mode  base2
{
 class body of the derived class
};
*/
class base1
{
protected:
    int base1int;

public:
    void SetBaseint1(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void SetBaseint2(int b)
    {
        base2int = b;
    }
};
class base3
{
protected:
    int base3int;

public:
    void SetBaseint3(int c)
    {
        base3int = c;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void Show()
    {
        cout << "the value of base1 is :" << base1int << endl;
        cout << "the value of base2 is :" << base2int << endl;
        cout << "the value of base3 is :" << base3int << endl;
        cout << "the sum of base1 and base2 is :" << base1int + base2int + base3int << endl;
    }
};
/* this is the example of inheritade derived class:
class derived {
protected:
    int base1int;
    int base2int;
    public:
    {{ functions are always in public }}
};
*/

int main()
{
    derived ashu;
    ashu.SetBaseint1(8);
    ashu.SetBaseint2(9);
    ashu.SetBaseint3(3);
    ashu.Show();

    return 0;
}