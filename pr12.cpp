#include<iostream>
using namespace std;
void swap1(char&,char&);
void swap1(int&,int&);
void swap1(float&,float&);
void swap1(double&,double&);
int main()
{
    int x,y;
    char p,q;
    float m,n;
    double j,l;
    cout<<"enter first integer x:";
    cin>>x;
     cout<<"\n enter second integer y:";
     cin>>y;
    swap1(x,y);
    cout<<"\n after swaping x="<<x;
    cout<<"\n after swaping y="<<y;
    cout<<"\n enter first character p:";
    cin>>p;
     cout<<"\n enter second character q:";
     cin>>q;
      swap1(p,q);
      cout<<"\n after swaping p="<<p;
    cout<<"\n after swaping q="<<q;
    cout<<"\n enter first floating num m:";
    cin>>m;
     cout<<"\n enter second floating num n:";
     cin>>n;
    swap1(m,n);
    cout<<"\n after swaping m="<<m;
    cout<<"\n after swaping n="<<n;
    cout<<"\n enter first double num j:";
    cin>>j;
     cout<<"\n enter second double num l:";
     cin>>l;
    swap1(j,l);
     cout<<"\n after swaping j="<<j;
    cout<<"\n after swaping l="<<l;
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
inline void swap1(char &a,char &b)
{
  char temp;
  temp=a;
  a=b;
  b=temp;
}
inline void swap1(int &d,int &e)
{
    int temp;
    temp=d;
    d=e;
    e=temp;
}
inline void swap1(float &h,float &i)
{
    float temp;
    temp=h;
    h=i;
    i=temp;
}
inline void swap1(double &o,double &t)
{
    double temp;
    temp=o;
    o=t;
    t=temp;
}
