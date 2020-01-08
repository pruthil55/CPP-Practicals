#include<iostream>
using namespace std;
class Child
{
    char child_name[20],gender[20];
    public:
    void getdata()
    {
        cout<<"\n Enter the child name:";
        cin>>child_name;
        cout<<"\n Enter the gender:";
        cin>>gender;
    }
    void print()
    {
        cout<<"\n Child name:"<<child_name<<endl;
        cout<<"\n Gender : "<<gender<<endl;
    }
    friend class Perent;
};
class Perent
{
public:
    void dispdata(Child &c)
    {
        cout<<"\n child name:"<<c.child_name<<endl;
        cout<<"\n gender:"<<c.gender<<endl;
    }
};
int main()
{
    Child d1;
    Perent p1;
    d1.getdata();
    d1.print();
    cout<<"\n child details accsessed by parents:";
    p1.dispdata(d1);
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
