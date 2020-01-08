#include<iostream>
using namespace std;
class measure
{
   double m,cm;
   public:
       measure operator+(int);
       measure operator-(double);
       friend  measure operator+(double,measure);
       friend  measure operator-(double,measure);
       measure()
       {
           m=0;
           cm=0;
       }
       measure(double m,double cm)
       {
           this->m=m;
           this->cm=cm;
       }
       void get()
       {
           cout<<"\n enter the value of meter";
           cin>>m;
           cout<<"\n enter the value of centi-meter";
           cin>>cm;
       }
       void put()
       {
           cout<<"\n meter:"<<m;
           cout<<"\n cm:"<<cm;
       }
};

measure measure::operator+(int x)
{
    return(measure (m+x,cm+x));
}
measure measure::operator-(double x)
{
    return(measure(m-x,cm-x));
}
measure operator+(double x,measure M)
{
    return(measure(x+M.m,x+M.cm));
}
measure operator-(double x,measure M)
{
    return(measure(x-M.m,x-M.cm));
}
int main()
{
    measure M1,M2,M3,M4;
    cout<<"\n M1:";
    M1.get();
    cout<<"\n M2:";
    M2.get();
    cout<<"\n M3:";
    M3.get();
    cout<<"\n M4:";
    M4.get();
    M1=M2+15;
    cout<<"\n after adding 15 in M2 here M1:";
    M1.put();
    M3=M1-4.5;
     cout<<"\n after minus 4.5 from M1 here M3:";
     M3.put();
    M1=5.0+M2;
     cout<<"\n after adding 5.0 in M2 here M1:";
    M1.put();
    M3=2.0-M4;
    cout<<"\n after minus M4 from 2.0 here M3:";
    M3.put();
    cout<<"\n \t it is created by pmh 18ce031";
    return 0;
}
