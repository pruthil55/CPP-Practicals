#include<iostream>
using namespace std;
class employee
{
public:
void hello()
{
cout<<"Hi hello"<<endl;
}
};
int main()
{
void (employee ::*fp)() = &employee::hello;
employee e;
employee *optr = &e;
(e.*fp)();
(optr->*fp)();
cout<<"\n it is created by pmh 18ce031";
return 0;
}
