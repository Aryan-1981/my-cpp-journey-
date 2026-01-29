#include<iostream>
using namespace std;
int main()
{
    // selection control structure : Switch case statements
      int age;
      cout<<"Enter your Age";
      cin>>age;
    switch (age)
    {
        case 18:
        cout<<" You are 18 ";
        break;
        case 21:
        cout<<" You are 21";
        break;
        case 19:
        cout<<" You are 19";
    }
}