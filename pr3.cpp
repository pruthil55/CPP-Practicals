#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a=3.33,b=4.44,sum=0;
    float *pta=&a,*ptb=&b,*ptsum=&sum;
    sum=*pta + *ptb;
    cout<<"fixed sum="<<fixed<<setprecision(2)<<*ptsum<<endl;
    cout<<"scientific sum="<<scientific<<setprecision(2)<<*ptsum<<endl;
    cout<<"\nit is created by pmh 18ce031";
    return 0;
}
