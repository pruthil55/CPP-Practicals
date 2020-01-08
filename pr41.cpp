#include<iostream>
using namespace std;
class Media
{
    string title;
    float price;
public:
    Media(){}
    Media(string t,float f)
    {
        title=t;
        price=f;
    }
    virtual void display()
    {
        cout<<"Titile name is:"<<title<<endl;
        cout<<"The price is:"<<price<<endl;
    }
};
class Book:public Media
{
    int pc;
public:
    Book(string t,float f,int c):Media(t,f)
    {
        pc=c;
    }
    void display()
    {
        cout<<"total page number in book is:"<<pc<<endl;
    }
};
class Tape:public Media
{
    float mins;
public:
    Tape(string t,float f,int m):Media(t,f)
    {
        mins=m;
    }
    void display()
    {
        cout<<"The minutes is:"<<mins<<endl;
    }
};
int main()
{
    cout<<"The created by Fenil Vaghasiya 18IT139"<<endl;
    Media *m1,n1("pruthil",750.5);
    m1=&n1;
    m1->display();
    Book b1("pruthil",750.5,5);
    m1=&b1;
    m1->display();
    Tape t1("pruthil",750.5,70);
    m1=&t1;
    m1->display();
    return 0;
}
