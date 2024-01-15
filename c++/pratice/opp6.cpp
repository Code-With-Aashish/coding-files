#include<iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setmunber(int n1, int n2);
    void printnum();
    friend complex sum7(complex o1, complex o2); // When private variable are in use in another function that cannot be related to the class then use friend function.
    // To acess private variable we use to friend function.
};

void complex :: setmunber(int n1, int n2)
{
    a = n1;
    b = n2;
}

void complex :: printnum()
{
    cout << "Your complex number is " << a << " + " << b << "i" << endl;
}

//  This is an a normal friend it is not a family member.It's means the (sum7) is'n the function of a class complex. It has permission to acess the private member of class complex.

complex sum7(complex o1, complex o2) // This is the example of friend function. we want to give obj. to acess the private variable.it takes obj. in input. 
{
    complex o3;
    o3.setmunber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;

    c1.setmunber(7, 8);
    c1.printnum();

    c2.setmunber(5, 9);
    c2.printnum();

    sum = sum7(c1, c2);
    sum.printnum();
    return 0;
}
/* proporties of friend function.
1. Not in the scope in the class.
2. since it is not in the scope in the class, it cannot be called from the objectof that class. c1.sun7() -- invilade sintax.
3. can be innvoke without the help of any object.
4. usally contain the object as arguments.
5. can be dicleared in private and public section.
6. It cannot acces the member directly by their name and need object_name.member name to acess any member.
*/