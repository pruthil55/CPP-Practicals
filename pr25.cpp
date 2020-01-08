#include<iostream>
using namespace std;
class sample
{
int m, n;
public:
void getdata();
void putdata() const;
};
void sample::getdata()
{
cout<< "Enter m & n";
cin>>m>>n;
}
void sample::putdata() const
{
cout<< " m = "<<m<<"n= "<<n;
}
int main()
{
sample s1;
s1.getdata();
s1.putdata();
cout<<"\n it is created by pmh 18ce031"
return 0;
}
