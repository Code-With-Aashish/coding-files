#include <iostream>
using namespace std;
class BaseClass
{
private:
public:
    int var1;
    void SetData1(int x)
    {
        var1 = x;
    }
    void Display()
    {
        cout << "The value of Baseclass var1 is : " << var1 << endl;
    }
};
class DerivedClass : public BaseClass
{
private:
public:
    int var2;
    void Display()
    {
        cout << "The value of Baseclass var1 is : " << var1 << endl;
        cout << "The value of Derivedclass var2 is : " << var2 << endl;
    }
};
int main()
{
    // Base class ka pointer derived class ko piont kar sakata hai. This is legal.
    // when i call th display function in derived class it call the base class display function.this is callde th late binding in c++.
    // pointer jis type ka rahega us type ka function bhi run hoga.
    BaseClass *Base_class_pointer;
    BaseClass objbase;
    DerivedClass objderi;
    Base_class_pointer = &objderi;
    Base_class_pointer->var1 = 89;
    // Base_class_pointer->var2 = 09; // I cannot acess th derived class variable and function by using the base class pointer.
    Base_class_pointer->Display();

    DerivedClass *Derived_Class_Pointer;
    Derived_Class_Pointer = &objderi;
    Derived_Class_Pointer->var2 = 987;
    Derived_Class_Pointer->var1 = 907;
    Derived_Class_Pointer->Display();

    return 0;
}