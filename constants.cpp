#include<iostream>
using namespace std;
int main()
{
    // int a = 32;
    // cout<<"The value of int a was "<<a<<endl;
    // a = 26;
    // cout<<"The value of int a is "<<a<<endl;
    // // The value changed

    const int a = 43;
    cout<<"The value of int a was "<<a<<endl;
     a = 26;
     cout<<"The value of int a is "<<a<<endl;
    //  now it is giving error if we have written const in it 

    return 0;
}