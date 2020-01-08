#include<iostream>
using namespace std;
class hospital
{
    int pid;
    char name[40];
public:
    void get();
    void put();
};
class ward:public virtual hospital
{
    int wno;
public:
    void getdata();
    void putdata();
};
class room:public virtual hospital
{
    int bno;
    char nature[30];
public:
    void input();
    void print();
};
class patient:public ward,public room
{
};
void hospital::get()
{
    cout<<"\n enter the id number of patient:";
    cin>>pid;
    cout<<"\n enter the name of patient:";
    cout<<name;
}
void hospital::put()
{
    cout<<"\n id number of patient:"<<pid;
    cout<<"\n name of patient:"<<name;
}
void ward::getdata()
{
    cout<<"\n enter the ward number of patient:";
    cin>>wno;
}
void ward::putdata()
{
    cout<<"\n ward number of patient:"<<wno;
}
void room::input()
{
    cout<<"\n enter the bed number of patient:";
    cin>>bno;
    cout<<"\n enter the nature of illness:";
    cin>>nature;
}
void room::print()
{
    cout<<"\n bed number of patient:"<<bno;
    cout<<"\n nature of illness:"<<nature;
}
int main()
{
        patient p[5];
        for(int i=0;i<5;i++)
        {
            p[i].get();
            p[i].getdata();
            p[i].input();
        }
           for( int j=0;j<5;j++)
        {
            p[j].put();
            p[j].putdata();
            p[j].print();
        }
        cout<<"\n it is created by pmh 18ce031";

}
