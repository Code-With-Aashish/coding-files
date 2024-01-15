#include <iostream>
#include <cmath>
using namespace std;
class Simple_Calculator
{
private:
    int a, b;

public:
    void Get_data_Simple()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
        cout << "Enter the value of b : " << endl;
        cin >> b;
    }
    void Perform_Operation_Simple()
    {
        cout << "The sum is :" << a + b << endl;
        cout << "The difference is :" << a - b << endl;
        cout << "The muntiplacition is :" << a * b << endl;
        cout << "The division is :" << a / b << endl;
    }
};
class Scintific_Calculator
{
private:
    int a, b;

public:
    void Get_data_Scintific()
    {
        cout << "Enter the value of a : " << endl;
        cin >> a;
        // cout << "Enter the value of b : " << endl;
        // cin >> b;
    }
    void Perform_Operation_Scintific()
    {
        cout << "The value of cos(a) is : " << cos(a) << endl;
        cout << "The value of sin(a) is : " << sin(a) << endl;
        cout << "The value of tan(a) is : " << tan(a) << endl;
        cout << "The squaer of a is : " << pow(a, 2) << endl;
        cout << "The value of squareroot of a is : " << sqrt(a) << endl;
    }
};
class Hybreate_Calculator : public Scintific_Calculator, public Simple_Calculator
{
};

int main()
{
    // Simple_Calculator c1;
    // c1.Get_data();
    // c1.Perform_Operation_Simple();
    // Scintific_Calculator sc1;
    // sc1.Get_data();
    // sc1.Perform_Operation_Scintific();
    Hybreate_Calculator c3;
    c3.Get_data_Scintific();
    c3.Perform_Operation_Scintific();
    cout << "This is the simple calculator.." << endl;
    c3.Get_data_Simple();
    c3.Perform_Operation_Simple();

    return 0;
}