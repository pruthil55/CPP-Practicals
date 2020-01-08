#include<iostream>
using namespace std;
class alpha
{
    int x;
public:
    alpha()
    {
        x=0;
    }
    alpha(int x1)
    {
        x=x1;
    }
    void out()
    {
        cout<<"value of X::"<<x<<endl;
    }
};
class beta
{
    int y;
public:
    beta()
    {
        y=0;
    }
    beta(int y1)
    {
        y=y1;
    }
    void outd()
    {
        cout<<"value of Y::"<<y<<endl;
    }
};
class gamma:public alpha,public beta
{
    int m,n;
public:
    gamma()
    {
        m=0;
        n=0;
    }
    gamma(int m1,int n1)
    {
        m=m1;
        n=n1;
    }
    void print()
    {
        cout<<"value of M::"<<m<<endl<<"value oof N::"<<n<<endl;
    }
};
int main()
{
    alpha a1(9);
    beta b1(18);
    gamma g(3,5);
    g.out();
    g.outd();
    g.print();
    cout<<"\n it is created by pmh 18ce031";
}

