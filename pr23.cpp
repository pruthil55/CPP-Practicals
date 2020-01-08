#include<iostream>
using namespace std;
class customer;
class manager
{
    char mname[30];
    int eid;
public:
    void get();
    void get_cust_data(customer);
}m;
class customer
{
public:
    char cname[30];
    int cno;
public:
    void getdata();
    friend void manager::get_cust_data(customer);
}c1,c2;
void manager::get()
{
    cout<<"enter the name of manager:";
    cin>>mname;
    cout<<"\n enter the employee id:";
    cin>>eid;
}
void customer::getdata()
{
    cout<<"\n enter the name of customer:";
    cin>>cname;
    cout<<"\n enter the number of customer:";
    cin>>cno;
}
void manager::get_cust_data(customer c)
{
    cout<<"\n name of customer:"<<c.cname;
    cout<<"\n number of the customer:"<<c.cno;
}
int main()
{
    c1.getdata();
    c2.getdata();
    m.get_cust_data(c1);
    m.get_cust_data(c2);
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
