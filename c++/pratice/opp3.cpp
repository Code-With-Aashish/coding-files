#include <iostream>
using namespace std;
class shop

{
private:
    int itemId[50];
    int itemPrice[50];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter the id of item number " << counter + 1 << ": " << endl;
    cin >> itemId[counter];
    cout << "Enter the of price item : " << endl;
    cin >> itemPrice[counter];
    counter ++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price if item with Id : " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop ashu;
    ashu.initcounter();
    ashu.setprice();
    ashu.setprice();
    ashu.setprice();
    // ashu.setprice();
    // ashu.setprice();
    // ashu.setprice();
    ashu.displayprice();

    return 0;
}