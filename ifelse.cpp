// This is a example of selection structures


#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<" Enter your age"<<endl;
    cin>>age;
    if (age<18)
    {
        cout<<" You are not allowed to party "<<endl;

    }
    else if (age==18)
{
    cout<<"You are allowed to party with a kidpass"<<endl;

}
else
{
    cout<<" You are allowed to the party"<<endl;

}
return 0;
}