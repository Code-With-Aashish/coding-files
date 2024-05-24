#include <iostream>
#include <cmath>
using namespace std;

class calculator
{
protected:
    int a, b;

public:
    friend class ScientificCalculator;
    friend class HybridCalculator;

    void setvalue(int x, int y)
    {
        a = x;
        b = y;
    }

    void calculate()
    {
        cout << "The sum is : " << a + b << endl;
        cout << "The multiply is : " << a * b << endl;

        if (b != 0)
        {
            cout << "The division is : " << static_cast<float>(a) / b << endl;
        }
        else
        {
            cout << "Cannot divide by zero." << endl;
        }

        cout << "The subtraction is : " << a - b << endl;
    }
};

class ScientificCalculator : public calculator
{
public:
    double power()
    {
        return pow(a, b);
    }

    void display()
    {
        cout << "The num1 raised to num2 is : " << power() << endl;
    }
};

class HybridCalculator : public calculator, public ScientificCalculator
{
};

int main()
{
    ScientificCalculator ashu;
    ashu.setvalue(8, 3);
    ashu.calculate();
    ashu.display();

    return 0;
}
