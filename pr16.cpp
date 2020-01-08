#include<iostream>

using namespace std;
class batsman
{
    char bname[20];
    int bcode;
    int innings,notout,runs;
    float bavg;
    void calcavg();
public:
    void getdata();
    void putdata();
}b;
void batsman::getdata()
{
    cout<<"enter batsman name:";
    cin>>bname;
    cout<<"\n enter batsman code:";
    cin>>bcode;
    cout<<"\n enter the innings:";
    cin>>innings;
    cout<<"\n enter notout innings of batsman:";
    cin>>notout;
    cout<<"\n enter runs:";
    cin>>runs;
}
 inline void batsman::calcavg()
    {
        bavg=runs/(innings-notout);
        cout<<"\n batting avg:"<<bavg;
    }
void batsman::putdata()
{
    cout<<"batsman name:"<<bname;
    cout<<"\n batsman code:"<<bcode;
    cout<<"\n the innings:"<<innings;
    cout<<"\n notout innings of batsman:"<<notout;
    cout<<"\n runs:"<<notout;
    b.calcavg();
}
int main()
{
b.getdata();
b.putdata();
return 0;
}
