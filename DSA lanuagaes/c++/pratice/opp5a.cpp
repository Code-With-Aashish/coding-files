#include <iostream>
using namespace std;
// array in class is the very simple as the array in basic of c++.
class ashu
{
private:
    int id;
    int salary;

public:
    void setId(void)
    {
       
        cout << "Enter id of employee : " << endl;
        cin >> id;
    }

    void getId(void)
    {
        salary = id*2 + 2000;
        cout << "The id of employee  is : " << id <<" , and the salary is :"<<salary<< endl;
    }
};


int main()
{
    // ashu krish, saroj, ashish, somari;
    // krish.setId();
    // krish.getId();
    ashu food[10]; // creating the array in classes.
    for (int i = 0; i < 10; i++)
    {
        food[i].setId();
        food[i].getId();
        
    }

    return 0;
}