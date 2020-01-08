#include<iostream>
using namespace std;
int& tonlarge(int&,int&);
int main()
{
    int a,b;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"\n enter the value of b:";
    cin>>b;
    tonlarge(a,b)=100;
    cout<<"\n value of a:"<<a;
    cout<<"\n value of b:"<<b;
    cout<<"\n it is created by pmh 18ce031.";
}
int& tonlarge(int &x,int &y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
