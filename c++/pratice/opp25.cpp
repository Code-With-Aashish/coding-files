#include <iostream>
using namespace std;
class Student

{
protected:
    int Roll_no;

public:
    void Set_Roll_no(int a)
    {
        Roll_no = a;
    }
    void Print()
    {
        cout << "Your roll number is : " << Roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float Math, Physics;

public:
    void Set_Marks(float x, float y)
    {
        Math = x;
        Physics = y;
    }
    void Print_Marks()
    {
        cout << "Your Marks in math is : " << Math << endl;
        cout << "Your Marks in physics is : " << Physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float Score;

public:
    void Set_Score(float b)
    {
        Score = b;
    }
    void Print_score()
    {
        cout << "Your Marks in Sports : " << Score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float Total;

public:
    void Display(void)
    {
        Total = Math + Physics + Score;
        Print();
        Print_Marks();
        Print_score();
        cout << "The total marks is : " << Total << endl;
    }
};

int main()
{
    Result Ashish;
    Ashish.Set_Roll_no(10);
    Ashish.Set_Marks(99.0, 78.0);
    Ashish.Set_Score(99.90);
    Ashish.Display();
    return 0;
}
