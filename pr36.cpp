#include<iostream>
using namespace std;
class shape
{
    char sname[30];
public:
    void get();
    void put();
};
class circle:public shape
{
protected:
    float radius;
public:
    void getdata();
    void putdata();
};
class area:public circle
{
    float area_circle;

public:
    void display();
};
void shape::get()
{
    cout<<"\n enter the shape of the object:";
    cin>>sname;
}
void shape::put()
{
    cout<<"\n shape:"<<sname;
}
void circle::getdata()
{
    cout<<"\n enter the radius of cicle:";
    cin>>radius;
}
void circle::putdata()
{
    cout<<"\n radius of circle:"<<radius;
}
void  area::display()
{
    put();
    putdata();
   cout<<"\n area of circle is:"<<(3.14*radius*radius);;
}
int main()
{
    area a;
    a.get();
    a.getdata();
    a.display();
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
