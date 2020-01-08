#include<iostream>
using namespace std;
int add(int [],int);
int main()
{
    int a[30],n,i,sum;
    cout<<"enter number of element:";
    cin>>n;
    cout<<"enter the element of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sum=add(a,n);
    cout<<"\n sum is="<<sum;
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
int add(int a[],int n)
{
    static int s=0,j=0;
    if(j<n)
    {
    s=s+a[j];
    j++;
    add(a,n);
    }
    else
    {
        return s;
    }
}

