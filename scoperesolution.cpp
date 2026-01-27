#include<iostream>
using namespace std;
int c = 45;
int main()
{
    int a,b,c;
    cout<<"Enter a number to be assign with a"<<endl;
    cin>>a;
    cout<<"Enter a number to be assign with b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum of a and b is "<<c<<"."<<endl;
    cout<<"The value of global c is "<<::c;

}
