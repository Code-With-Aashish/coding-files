#include <iostream>
using namespace std;
class complex
{
private:
    int a, b, c;

public:
    void read(int x, int y);
    void sum();
    void print(void);
};
void complex::read(int x, int y)
{
    a = x;
    b = y;
    sum();
}
void complex::sum()
{
    c = a + b;
}
void complex::print()
{
    cout << "The sum of two number is: " << c << endl;
};

int main()
{
    int x, y;
    cout << "Enter the 1st number: " << endl;
    cin >> x;
    cout << "Enter the 2nd number: " << endl;
    cin >> y;
    complex ashu;
    ashu.read(x, y);
    ashu.print();
    return 0;
}