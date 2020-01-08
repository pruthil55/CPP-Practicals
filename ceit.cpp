#include<iostream>
#include<string.h>
using namespace std;
class charusat
{
    int idno;
    char name[15],field[15];
    static int ce,it;

public:
    void getdata();
    void putdata();
    static void getcount();
};
int charusat::ce;
int charusat::it;
void charusat::getdata()
{
    cout<<"enter id no:";
    cin>>idno;
    cout<<"\n enter the name of student:";
    cin>>name;
    cout<<"\n enter the field of student:";
    cin>>field;
    if(strcmp(field,"ce")==0)
    {
        ce++;
    }
    else
    {
        it++;
    }

}
void charusat::putdata()
{
    cout<<"\n id no:"<<idno;
    cout<<"\n the name of student:"<<name;
    cout<<"\n the field of student:"<<field;

}
void charusat::getcount()
{
    cout<<"\n total no. of student in ce field:"<<ce;
    cout<<"\n total no. of student in it field:"<<it;
}
int main()
{
    charusat s[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"\n enter data of student:"<<i+1<<endl;
        s[i].getdata();
    }
     for(i=0;i<5;i++)
    {
        cout<<"\n details of student:"<<i+1<<endl;
        s[i].putdata();
    }
    charusat::getcount();
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}

