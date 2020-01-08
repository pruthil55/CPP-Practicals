#include<iostream>
using namespace std;
class medicin
{
    char type[30];
    char cname[20];
    struct date
    {
        int mm;
        int yy;
    }d;
public:
    void get();
    void put();
};
class tablet:public medicin
{
   char tname[30];
   int tqun;
   float tprice;
public:
    void getdata();
    void putdata();
};
class syrup:public medicin
{
    int squn;
    int dosage;
public:
    void input();
    void print();
};
void medicin::get()
{
    cout<<"\n enter the type of medicine:";
    cin>>type;
    cout<<"\n enter the company name of madicine:";
    cin>>cname;
    cout<<"\n enter the date of manufacturing in mm/yy:";
    cin>>d.mm>>d.yy;
}
void medicin::put()
{
    cout<<"\n type:"<<type;
    cout<<"\n company name:"<<cname;
    cout<<endl<<"manufacturing date:"<<d.mm<<"/"<<d.yy;
}
void tablet::getdata()
{
    cout<<"\n enter the name of tablet:";
    cin>>tname;
    cout<<"\n enter the quentity of tablet:";
    cin>>tqun;
    cout<<"\n enter the price of tablet:";
    cin>>tprice;
}
void tablet::putdata()
{
    cout<<"\n tablet name:"<<tname;
    cout<<"\n tablet quantity:"<<tqun;
    cout<<"\n tablet price:"<<tprice;
}
void syrup::input()
{
    cout<<"\n enter the quantity of syrup:";
    cin>>squn;
    cout<<"\n enter the dosage unit per member:";
    cin>>dosage;
};
void syrup::print()
{
    cout<<"\n quantity of syrup:"<<squn;
    cout<<"\n dosage unit:"<<dosage;
}
int main()
{
    tablet t;
    syrup s;
    t.get();
    t.put();
    t.getdata();
    t.putdata();
    s.input();
    s.print();
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
