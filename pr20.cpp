#include<iostream>
#include<string.h>
using namespace std;
class gate
{
    int regno;
    char name[15],excnt[15];
    static int ecv_cnt,ecs_cnt,eca_cnt;

public:
    void getdata();
    void putdata();
    static void getcount();
};
int gate::ecv_cnt;
int gate::eca_cnt;
int gate::ecs_cnt;
void gate::getdata()
{
    cout<<"enter registaration no:";
    cin>>regno;
    cout<<"\n enter the name of student:";
    cin>>name;
    cout<<"\n enter the examination center of student:";
    cin>>excnt;
    if(strcmp(excnt,"vadodara")==0)
    {
        ecv_cnt++;
    }
    else if(strcmp(excnt,"surat")==0)
    {
        ecs_cnt++;
    }
    else
    {
        eca_cnt++;
    }
}
void gate::putdata()
{
    cout<<"\n registaration no:"<<regno;
    cout<<"\n the name of student:"<<name;
    cout<<"\n the examination center of student:"<<excnt;

}
void gate::getcount()
{
    cout<<"\n total no. of student in surat center:"<<ecs_cnt;
    cout<<"\n total no. of student in vadodara center:"<<ecv_cnt;
    cout<<"\n total no. of student in ahmedabad center:"<<eca_cnt;
}
int main()
{
    gate s[5];
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
    gate::getcount();
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}


