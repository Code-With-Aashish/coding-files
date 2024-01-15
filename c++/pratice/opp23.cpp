#include <iostream>
using namespace std;
class base1
{
public:
    void Greed()
    {
        cout << "How are you!!" << endl;
    }
};
class base2
{
public:
    void Greed()
    {
        cout << "Good Morning!!" << endl;
    }
};

class base3 : public base1, public base2
{
    int a;

public:
    void Greed()
    {
        base2::Greed();
    }
};
class b
{
private:
public:
    void Say()
    {
        cout << "Hello world!!" << endl;
    }
};

class d : public b
{
public:
    // void Say()
    // {
    //     cout << "Hii my name is Ashish vishwakarama !! " << endl;
    // }
};

int main()
{
    // Ambibuty 1

    // base1 obj1;
    // base2 obj2;
    // // obj1.Greed();
    // // obj2.Greed();
    // base3 obj3;
    // obj3.Greed();

    // Ambibuty 2
    b B;
    B.Say();

    d D;
    D.Say();

    return 0;
}