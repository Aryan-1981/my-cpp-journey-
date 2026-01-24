#include<iostream>
using namespace std;
int c = 32;
int main()
{
    int a , b;
    cout<<"Enter a number for a : ";
    cin>>a;
    cout<<"Enter a number for b :";
    cin>>b;
    int c = a+b;
    cout<<"The sum of a and b is : "<<c<<endl;
    cout<<"print the value of global c :"<<::c<<endl;
    return 0;
}
