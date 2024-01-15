#include<iostream>
using namespace std;
// int add(int a, int b){
//     cout<<"Using function with 2 argument"<<endl;
//     return a+b;
// }

// int add(int a, int b, int c){
//     cout<<"Using function with 3 argument"<<endl;
//     return a+b+c;
// }
// calculate the area of cycliender.
int volume(double r, int h){
return(3.14*r*r*h);
}
// calculate the volume of cube.
int volume(int a){
    return (a*a*a);
}
// volume of cuboid
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){

    // cout<<"The sum of 3 and 4 is : "<< add( 3, 4) << endl;
    // cout<<"The sum of 3, 7 and 4 is : "<< add( 3, 4, 7) << endl;
    cout<<"The volume of cuboid l=3, b=7 and h=4 is : "<< volume( 3, 4, 7) << endl;
    cout<<"The volume of cycliender of r=3, h=4 is : "<< volume( 3, 4) << endl;
    cout<<"The volume of cube of 3 is : "<< volume(3) << endl;


    return 0;
}