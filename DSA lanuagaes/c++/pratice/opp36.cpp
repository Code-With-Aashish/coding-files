#include <iostream>
using namespace std;
// when I created the pionter who point the base class but we want ot run the derived class function then we created the base class functio as the virtual function.
// pointer banaya base class ka us ko point karaya derived class se tub mai shrif base class function ko hi use kar saka ta hoo lekin agr mai base class ke function ko virtual function bana du tub mai inharited methord use kar sakata hoo tub mai run time polymophism use kar raha hoo.
// base class ka pointer mere type ko pointer agar derivde class ko point kar raha hai to mera function mut run karo us ka hi function runkar do.
class BaseClass
{
private:
public:
    int var1 = 23;
    virtual void Display()
    {
        cout << "1 The value of Baseclass var1 is : " << var1 << endl;
    }
};
class DerivedClass : public BaseClass
{
private:
public:
    int var2 = 34;
    void Display()
    {
        cout << "2 The value of Baseclass var1 is : " << var1 << endl;
        cout << "2 The value of Derivedclass var2 is : " << var2 << endl;
    }
};
int main()
{
    // virtual function
    BaseClass *Base_class_pointer;
    BaseClass objbase;
    DerivedClass objderi;

    Base_class_pointer = &objderi;
    Base_class_pointer->Display();

    return 0;
}