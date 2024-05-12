#include <iostream>
using namespace std;

int main()
{
    int i = 2; // if in the for loop the same name variable can be hided by the for loop while exucting the loop
    // for (int i = 0, b = 10, c = 20; (a + b + c < 100); c--, b++, a += c)
    // {
    //     // cout << a << endl;
    // }

    for (int i = 0; i < 10; i++)
    {
        // i = i + i;
        cout << i << endl;
    }

    cout << i << endl;

    // infinite loop
    for (i = 0;; i++)
    {
        cout << i << " Never ending!\n";
    }
    return 0;
}
