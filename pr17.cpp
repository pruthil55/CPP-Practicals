#include<iostream>
using namespace std;
class digit
{
    int n;
public:
    void enter()
    {
        cout<<"enter a no:";
        cin>>n;
    }
    void show()
    {
        cout<<"\n the no ="<<n;
    }
    int compare(digit d)
    {
        if(n>d.n)
        {
            return 1;
        }
        else if(n<d.n)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    digit d1,d2;
    cout<<"for d1:\n";
    d1.enter();
    cout<<"\n for d2:\n";
    d2.enter();
     cout<<"\n for d1:";
    d1.show();
        cout<<"\n for d2:";
    d2.show();
    int x=d1.compare(d2);
    if(x==1)
    {
        cout<<"\n d1 is greater than d2";
    }
    else if(x==0)
    {
        cout<<"\n d1 is less than d2";
    }
    else
    {
        cout<<"\n d1 is equal to d2";
    }
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}


