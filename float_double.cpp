#include<iostream>
using namespace std;
int main() {
     float a= 32.32f;
     long double b = 32.32l;
     cout<<"The value of a is "<<a<<". The value of b is "<<b<<endl;
     cout<<" The size of 32.32 is "<<sizeof(32.32)<<endl;
     cout<<" The size of 32.32f is "<<sizeof(32.32f)<<endl;
     cout<<" The size of 32.32F is "<<sizeof(32.32F)<<endl;
     cout<<" The size of 32.32l is "<<sizeof(32.32l)<<endl;
     cout<<" The size of 32.32L is "<<sizeof(32.32L)<<endl;
     

     return 0;

}