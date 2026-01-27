#include<iostream>
using namespace std;
int main()
{
    int a = 43;
    int b= 64;
    int c = ((((a*b)+43)-46)+56); // This shows the working of operator precedence .
    cout<<"THe value of c will be "<<c;
    return 0;
}