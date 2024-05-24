#include <iostream>

using namespace std;
class Shop
{
private:
    int Id;
    float price;

public:
    void SetData(int x, float b)
    {
        Id = x;
        price = b;
    }
    void PrintData(void)
    {
        cout << "The price of item is : " << price << ",and Id is : " << Id << endl;
    }
};
int main()
{
    int size = 3;
    // int *ptr = &size;//it stores the adress of intizer size .. thats the Shop *ptr is stored adress of the class shop ...
    // int *ptr =new int [34]; // say to compiler create the the 34 new intizers in ram ... please clear the ram for store the 34 variable in ram ...
    // pointers cannot be reverse ...
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Id  of item is " << i + 1 << endl;
        cin >> p;
        cout << "Price of item is " << i + 1 << endl;
        cin >> q;
        // (*ptr).SetData(p, q);
        // (*ptr).PrintData();
        ptr->SetData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        ptrTemp->PrintData();
        ptrTemp++;
    }

    delete[] ptr;

    return 0;
}
