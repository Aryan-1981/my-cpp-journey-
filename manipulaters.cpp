#include<iostream>
#include<iomanip> // this Header file included to use setw manipulator
using namespace std;
int main()
{
    int a = 32;
    int b = 42;
    int c = 322;
    cout<<" A using setw"<<setw(5)<<a<<endl;   // we have used endl to start with new line and use setw for giving width to the values
    cout<<" B using setw"<<setw(5)<<b<<endl;   // we have used endl to start with new line and use setw for giving width to the values
    cout<<" C using setw"<<setw(5)<<c<<endl;   // we have used endl to start with new line and use setw for giving width to the values

    cout<<" A without using setw "<<a<<endl;  
    cout<<" B without using setw "<<b<<endl;  
    cout<<" C without using setw "<<c<<endl;  
     

}
