#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
    double distanceTo(point otherPoint)
    {
        
        return sqrt(pow(otherPoint.x - x, 2) + pow(otherPoint.y - y, 2));
    }
};

int main()
{
    point p(9, 8);
    p.displaypoint();

    point q(5, 9);
    p.displaypoint();

    // cout<<"The distance of the two point is : "<<p.distanceTo(q);
    return 0;
}