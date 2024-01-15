#include <iostream>
using namespace std;
// declearing the class obj.
class employe
{
private:
    int a, b, c; // only {class function} can acces the private values.

public:
    int d, e;                             // {anyone} can acces the public value.
    void setData(int a1, int b1, int c1); // diclearation -- mil jaye ga aage.
    void getData();
};
// declaering the functoin below the class.
void employe ::setData(int a1, int b1, int c1) // important point -- (::) this is very useful.It is use to declear the function outside of the class.
{
    a = a1;
    b = b1;
    c = c1;
}
// decelearition of getData.
void employe ::getData()
{

    cout << "The value of a is :" << a << endl;
    cout << "The value of b is :" << b << endl;
    cout << "The value of c is :" << c << endl;
    cout << "The value of d is :" << d << endl;
    cout << "The value of e is :" << e << endl;
}

int main()
{
    employe ashu;
    ashu.d = 98;
    ashu.e = 65;
    ashu.setData(1, 2, 3);
    ashu.getData();

    cout << "The value of kasu" << endl; // this type of cout is use to seperate the output.

    employe kasu;
    kasu.d = 77;
    kasu.e = 55;
    kasu.setData(10, 20, 30);
    kasu.getData();

    return 0;
}