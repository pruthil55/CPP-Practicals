#include<iostream>
using namespace std;
class time
{
    int hr,mn,sec;
public:
    void getdata()
    {
        cout<<"enter time in formate hr:mn:sec=";
        cin>>hr>>mn>>sec;
    }
    void putdata();
    time()
    {
        hr=11;
        mn=59;
        sec=59;
    }
    time(int h,int m,int s)
    {
        hr=h;
        mn=m;
        sec=s;
    }
    time(time &t)
    {
        hr=t.hr;
        mn=t.mn;
        sec=t.sec;
    }
    ~time()
    {
    }
};
void time::putdata()
{
    cout<<"\n time is:"<<hr<<":"<<mn<<":"<<sec;
}
int main()
{
 time t1,t2(5,5,59),t3(t1);
  t1.putdata();
  t2.putdata();
  t3.putdata();
  cout<<"\n it is created by pmh 18ce031";
  return 0;
}

