#include<iostream>
using namespace std;
int a,b;
int& tonlarge();
int main()
{
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"\n enter the value of b:";
    cin>>b;
    tonlarge()=100;
    cout<<"\n value of a:"<<a;
    cout<<"\n value of b:"<<b;
    cout<<"\n it is created by pmh 18ce031.";
}
int& tonlarge()
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
