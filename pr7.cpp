#include<iostream>
using namespace std;
int m=30;
int main()
{
int m=20;
{
int m=10;
cout<<"we are in inner block"<<endl;
cout<<"value of m="<<m<<"\n";
cout<<"value of ::m="<<::m<<"\n";
}
cout<<"we are in outer block"<<endl;
cout<<"value of m="<<m<<"\n";
cout<<"value of ::m="<<::m<<"\n";
cout<<"\n it is created by pmh 18ce031";
return 0;
}
