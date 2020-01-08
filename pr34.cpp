#include<iostream>
using namespace std;
class vegetable
{
    char color[30];
public:
    void get();
    void put();
};
class tometo:public vegetable
{
    float weight;
    char Size[20];
public:
    void getdata();
    void putdata();
};
void vegetable::get()
{
    cout<<"\n enter the color of vegetable:";
    cin>>color;
}
void vegetable::put()
{
    cout<<"\n color:"<<color;
}
void tometo::getdata()
{
    cout<<"\n enter the weight of the tometo in kg:";
    cin>>weight;
    cout<<"\n enter the size of the tometo:";
    cin>>Size;
}
void tometo::putdata()
{
    cout<<"\n weight:"<<weight;
    cout<<"\n size:"<<Size;
}
int main()
{
    tometo t;
    t.get();
    t.getdata();
    t.put();
    t.putdata();
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
