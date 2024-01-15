#include <iostream>
using namespace std;
int main()
{
    // array example ---  1.
    int marks[] = { 5, 9, 7, 90};
    // // how to print array value.
    // cout << "The marks is" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;


    // array example --- 2.
    // int mathmarks[4];
    // mathmarks[0] = 45;
    // mathmarks[1] = 90;
    // mathmarks[2] = 80;
    // mathmarks[3] = 55;
    //  how to print array value.
    // cout<<"The math marks is"<<endl;
    // cout << mathmarks[0] << endl;
    // cout << mathmarks[1] << endl;
    //  how to change the value of array.
    // mathmarks[2]= 900;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;


    //  how to print value of array using for loop. 
    // for ( int i = 0; i <= 3; i++)
    // {
    //     cout<<"The math marks "<<i<<" is "<< mathmarks[i]<<endl;
    // }  

    // pointers and array.
    int* P = marks;
    cout<<*(P++)<<endl;
    cout<<*P<<endl;
    // cout<<"The value of *p is :"<<*P<<endl;
    // cout<<"The value of *(p+1) is :"<<*(P+1)<<endl;
    // cout<<"The value of *(p+2) is :"<<*(P+2)<<endl;
    // cout<<"The value of *(p+3) is :"<<*(P+3)<<endl;

  


    return 0;
}