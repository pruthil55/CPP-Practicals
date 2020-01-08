#include<iostream>
#include<cmath>
using namespace std;
double power(double n,int p=2);
int main()
{
    int p;
    double n,m,c;
    cout<<"enter the value of number:";
    cin>>n;
    cout<<"\n enter the value of power:";
    cin>>p;
    m=power(n,p);
    cout<<"\n power of  number without default argument:"<<m;
    c=power(n);
    cout<<"\n power  of number at default argument:"<<c;
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
double power(double n,int p)
{
    return pow(n,p);
}
