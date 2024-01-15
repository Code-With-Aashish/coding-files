#include <iostream>
using namespace std;
// This is the example if multilevel inharitence.
// base class
class student
{
protected:
    int Roll_Number;

public:
    void Set_Roll_Number(int);
    void Get_Roll_Number();
};
void student::Set_Roll_Number(int r)
{
    Roll_Number = r;
}
void student::Get_Roll_Number()
{
    cout << "The Roll number is : " << Roll_Number << endl;
}
// intermited class
class Exam : public student
{
protected:
    float math;
    float physics;

public:
    void setmarks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }

    void Getmarks()
    {
        cout << "The marks in math is : " << math << endl;
        cout << "The marks in physics is : " << physics << endl;
    }
};
// derived class
class Result : public Exam
{
    float Percentage;

public:
    void percal()
    {
        Percentage = (math + physics) / 2;
    }
    void display_Result()
    {

        Get_Roll_Number();
        Getmarks();
        percal(); 
        cout << "Your percintage is : " << Percentage << " %" << endl;
    }
};

int main()
{
    Result Ashish;
    Ashish.Set_Roll_Number(01);
    Ashish.setmarks(75.0, 65.0);
    Ashish.display_Result();

    return 0;
}