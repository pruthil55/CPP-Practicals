#include<iostream>
using namespace std;
class number
{
    int num;
public:
    void input();
    void print();
    void operator++()
    {
        ++num;
    }
    void operator-()
    {
        num=-num;
    }
    void operator++(int)
    {
        num++;
    }
    number()
    {
        num=0;
    }
    number(int y)
    {
        num=y;
    }
    number(number &n)
    {
        num=n.num;
    }
};
void number::input()
{
    cout<<"enter the number:";
    cin>>num;
}
void number::print()
{
    cout<<"\n number="<<num;
}
int main()
{
    number n1,n2(30),n3(n2);
    ++n1;
    n1++;
    -n3;
    n1.print();
    n2.print();
    n3.print();
}
