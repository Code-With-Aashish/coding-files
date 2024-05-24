#include <iostream>
using namespace std;

class employe
{
private:
    static int count; // static variable is also known as class variable.
    // static variable is only one in a program and share it all the class variable.
    // Static function is the function that all static variable are used.The static function is only use to static variable.
    int id;

public:
    void setdata(void)
    {
        cout << "Enter the id : " << endl;
        cin >> id;
        count++; // increasing the count.
    }

    void getdata(void)
    {
        cout << "The id of employee is : " << id << " , this is the number of employe : " << count << endl;
    }

    static int getCount() // this function is static function.
    {
        return count;
    }
};

int employe::count = 0; // default value is '0'.

int main()
{
    employe ashu, krish, ashish;
    // count is the static member of class employe.
    ashu.setdata();
    ashu.getdata();

    krish.setdata();
    krish.getdata();

    ashish.setdata();
    ashish.getdata();

    cout << "Total number of employees: " << employe::getCount() << endl;

    return 0;
}