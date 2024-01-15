#include <iostream>
using namespace std;
class A
{
private:
    int a;

public:
    A& SetData(int a)
    {
        // (this->a) is th global variable and (a) is local variable..
        this->a = a;
        return *this;
    }

    void GetData()
    {
        cout << "The value of a is : " << a << endl;
    }
};

int main()
{
    // {{This}} is a keyword which is a pointer to the object which invokes the member function..
    A a;
    a.SetData(9);
    a.GetData();


    return 0;
}
