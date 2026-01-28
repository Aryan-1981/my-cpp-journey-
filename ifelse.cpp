#include<iostream>
using namespace std;
int main()
{
    int  name , age;
    cout<<" Enter you name Please "<<endl;
    cin>>name;
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
    cout<<name<<" You are allowed to the party"<<endl;

}
return 0;
}