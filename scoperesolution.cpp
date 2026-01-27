#include<iostream>
using namespace std;
int c = 45;
int main()
{
    int a,b,c;
    cout<<"Enter a number to be assign with a";
    cin>>a;
    cout<<"Enter a number to be assign with b";
    cin>>b;
    c=a+b;
    cout<<"The sum of a and b is "<<c<<"."<<endl;
    cout<<"The value of global c is "<<::c;

}
