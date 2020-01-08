#include<iostream>
using namespace std;
class celsius
{
    float cel;
public:
    celsius()
    {
        cel=0;
    }
    celsius(float f)
    {
        cel=f;
    }
    void put()
    {
        cout<<"\n value of celsius:"<<cel;
    }
    float ass()
    {
        return cel;
    }
};
class fahrenheit
{
    float fa;
public:
    fahrenheit()
    {
        fa=0;
    }
    fahrenheit(celsius c)
    {
        fa=c.ass();
    }
    operator celsius()
    {
        return fa;
    }
    void print()
    {
        cout<<"\n value of fahrenheit:"<<fa;
    }
};
int main()
{
    celsius c1,c2=5.0;
    cout<<"\n c1:";
    c1.put();
    cout<<"\n c2:";
    c2.put();
    fahrenheit f1,f2+;
    f2=c2;
    cout<<"\n f1:";
    f1.print();
    cout<<"\n f2:";
    f2.print();
    c1=f2;
    cout<<"\n after modifing value by c1=f2:";
    c1.put();
    cout<<"\n it is created by pmh 18ce031";
}
