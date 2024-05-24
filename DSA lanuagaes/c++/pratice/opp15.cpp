#include <iostream>
using namespace std;
// distructor never take any argument and not give any return value.
// distructor :- distroy the data in memory and delete the data from RAM.
int count = 0;
class num
{
private:
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is call for object number: " << count << endl;
    }
    // how to create the distructor.
    ~num()
    {
        cout << "this is the time when the distructor is called: " << count << endl;
        count--;
    } 
};

int main()
{
    cout << "I am in a  main function." << endl;
    cout << "creating our first object n1." << endl;
    num n1;
    // In below bracket the all variable and data are delete  before this bracket.
    // Is block ke ander jo bhi raghe ga vo block ke khatam ho te he distroy ho jaayega.
    {
        cout << "Entering the block." << endl;
        cout << "Creating two more object." << endl;
        num n2, n3;
        cout << "exiting the block." << endl;
    }
    // before bracket the alla data are clear by the distructor
    cout << "Back to main." << endl;

    return 0;
}