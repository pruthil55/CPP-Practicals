#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class Version
{
    char version[20];
public:
    void getA();
    void putA();
};
class cricbuzz:public Version
{
    public:
    char tname[30];
    char Bname[30];
    void getC();
    void putC();
};
class international:public cricbuzz
{
    char sname[40];
public:
    void getI();
    void putI();
};
class ipl:public cricbuzz
{
protected:
    char bname[30];
    int run;
    int inning;
    int notout;
public:
    void geti();
    void puti();
};
class odi:public virtual international
{
protected:
    int ocentury;
public:
    void geto();
    void puto();
};
class t20:public virtual international
{
protected:
    int ttcentury;
public:
    void getT();
    void putT();
};
class test:public virtual international
{
protected:
    int tcentury;
public:
    void gett();
    void putt();
};
class century:public odi,public t20,public test
{
    int total;
public:
    void Display();
};
class avg:public ipl
{
    float average;
public:
    void display();
};
void Version::getA()
{
    cout<<"\n enter the version of cricbuzz old or latest:";
    cin>>version;
}
void Version::putA()
{
    cout<<"\n name of version:";
}
void cricbuzz::getC()
{
    cout<<"\n enter the type of match international or ipl:";
    cin>>tname;
}
void cricbuzz::putC()
{
    cout<<"\n type of match is:"<<tname;
}
void international::getI()
{
    cout<<"\n enter the type of series:";
    cin>>sname;
    cout<<"\n enter the batsman name:";
    cin.getline(Bname,20);
    fflush(stdin);
}
void international::putI()
{
    cout<<"\n type of series:"<<sname;
    cout<<"\n name of batsman:"<<Bname;
}
void ipl::geti()
{
    cout<<"\n enter the batsman name:";
    cin.getline(bname,30);
    fflush(stdin);
    cout<<"\n enter total runs of batsman:";
    cin>>run;
    cout<<"\n enter the innings of batsman:";
    cin>>inning;
    cout<<"\n enter the notout innings of batsman:";
    cin>>notout;
}
void ipl::puti()
{
     cout<<"\nbatsman name:"<<bname;
     cout<<"\ntotal runs of batsman:"<<run;
     cout<<"\n the innings of batsman:"<<inning;
     cout<<"\n notout innings of batsman:"<<notout;
}
void odi::geto()
{
    cout<<"\n enter the total number of century in odi:";
    cin>>ocentury;
}
void odi::puto()
{
    cout<<"\n total number of century in odi:"<<ocentury;
}
void t20::getT()
{
    cout<<"\n enter the total number of century in t20:";
    cin>>ttcentury;
}
void t20::putT()
{
    cout<<"\n total number of century in t20:"<<ttcentury;
}
void test::gett()
{
    cout<<"\n enter the number of century in test:";
    cin>>tcentury;
}
void test::putt()
{
    cout<<"\n total number of century in test:"<<tcentury;
}
void avg::display()
{
    average=run/(inning-notout);
    cout<<"\n average of batsman:"<<average;
}
void century::Display()
{
    total=ocentury+ttcentury+tcentury;
    cout<<"\n total number of century through out the all formate:"<<total;
}
int main()
{
    century c;
    avg a;
    c.getA();
    c.getC();
    if(strcmp(c.tname,"international")==0)
    {
        c.geto();
        c.getT();
        c.gett();
        c.puto();
        c.putT();
        c.putt();
        c.Display();
    }
    else
    {
        a.geti();
        a.puti();
        a.display();
    }
    cout<<"\n it is created by pmh 18ce031";
}

