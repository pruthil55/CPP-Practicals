#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the value of n:";
    cin>>n;
    int *p=new int[n];
    cout<<"\n enter the value of element:";
    for(i=0;i<n;i++)
    {
        cin>>*(p+i);
        *(p+i)=*(p+i)+2;
    }
    cout<<"\n after modification:"<<endl;
      for(i=0;i<n;i++,p++)
    {
        cout<<*p<<endl;
    }
    delete(p);
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
