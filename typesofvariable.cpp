#include<iostream>
using namespace std;
int glo = 32;
void sum(){
    cout<<glo;
}
int main(){
    int a = 4;
    int glo = 34;
    int b = 29;
    float pi = 3.14;
    char z = 'a';
    glo = 67;
    sum();
    cout<<glo<<"\n";
cout<<"this is a program to define the variables . "<<endl;
cout<<" value of a is "<<a<<endl;
cout<< " The value of b is "<<b<<endl<<"\n.The sum of a and b is "<<a+b<<".\n";
cout<<"The value of pi is "<<pi<<".";
cout<<"this line defines the character working. This prints char = "<<z<<".";
return 0;

}