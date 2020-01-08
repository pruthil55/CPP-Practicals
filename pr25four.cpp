#include<iostream>
using namespace std;
void testlocalclass()
{
static int cnt;
class Test
{

public:
void set()
{
    cout<<"Enter Count: "; cin>>cnt;
}
void get()
{
     cout<<"Count: = " <<cnt;
}
};
Test t;
t.set();
t.get();
}
int main()
{
testlocalclass();
cout<<"\n it is created by pmh 18ce031";
return 0;
}
