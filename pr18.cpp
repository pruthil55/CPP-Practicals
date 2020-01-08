#include<iostream>
using namespace std;
class currency
{
    int ru,pa;
public:
    void enter()
    {
        cout<<"enter rupees:";
        cin>>ru;
        cout<<"\n enter paisa:";
        cin>>pa;
    }
    void show()
    {
        float total;
        total=float(ru)+float(pa)/100;
        cout<<"\n total :"<<total;
    }
    currency sum(currency);
    void sum(currency,currency) ;
};
currency currency::sum(currency c)
{
    currency temp;
    temp.ru=ru+c.ru;
    temp.pa=pa+c.pa;
    return temp;
}
void currency::sum(currency c1,currency c2)
{
    ru=c1.ru+c2.ru;
    pa=c1.pa+c2.pa;
}
int main()
{
    currency c1,c2,c3;
    cout<<"for c1:\n";
    c1.enter();
    cout<<"\n for c2:\n";
    c2.enter();
    c3=c1.sum(c2);
    cout<<"\n using one argument:\n";
    c3.show();
    c3.sum(c1,c2);
    cout<<"\n using two argument:\n";
    c3.show();
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}

