#include<iostream>
using namespace std;
class a
{
    int A;
public:
    virtual void get()
    {
        cout<<"\b base..";
    }
};
class b:public a
{
    int B;
public:
    void get()
    {
        cout<<"\n derived..";
    }
};
int main()
{
    a aobj,*ptr;
    b bobj;
    ptr=&bobj;
    ptr->get();
    return 0;
}
