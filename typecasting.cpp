//*****************typecasting**************************


#include<iostream>

using namespace std;
int main()
{
    int a = 43;
    float b = 43.43;
    cout<<"The value of a is " <<a<<endl;
    cout<<" the value of float a is "<<(float)a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of in b is "<<(int)b<<endl;

    // Another method to this 
    cout<<"The value of a is " <<a<<endl;
    cout<<" the value of float a is "<<float(a)<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of in b is "<<int(b)<<endl;
    return 0;
}