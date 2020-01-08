#include<iostream>
using namespace std;
class vehical
{
protected:
    float average;
public:
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class car:public vehical
{
    char fuel[30];
    int nowh;
public:
    void getdata()
    {
        cout<<"\n enter the type of fuel in car:";
        cin>>fuel;
        cout<<"\n enter the number of car:";
        cin>>nowh;
    }
    void putdata()
    {
        cout<<"\n type of fuel:"<<fuel;
        cout<<"\n no. of wheels:"<<nowh;
    }
};
class truck:public vehical
{
   char fuel[30];
   int nowh;
   public:
       void getdata()
       {
        cout<<"\n enter the type of fuel in truck:";
        cin>>fuel;
        cout<<"\n enter the number of truck:";
        cin>>nowh;
       }
       void putdata()
      {
        cout<<"\n type of fuel:"<<fuel;
        cout<<"\n no. of wheels:"<<nowh;
      }
};
int main()
{
    car c[2];
    truck t;
    c[1].getdata();
    c[2].getdata();
    t.getdata();
    c[1].putdata();
    c[2].putdata();
    t.putdata();
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
