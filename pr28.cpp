#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Complex
{
    public:
    int real,img;
public:
    Complex(){}
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    Complex(Complex &c)
    {
      real=c.real;
      img=c.img;
    }
    void show()
    {
        cout<<"The real number is:"<<real<<endl;
        cout<<"The imgionary number is:"<<img<<endl;
    }
    friend Complex operator-(Complex&);
};
Complex operator-(Complex &a)
{
    Complex c;
    c.real=-a.real;
    c.img=-a.img;
    return c;
}
int main()
{
    Complex c1,c2(10,20);
    cout<<"\n The parameterized constructor is used:"<<endl;
    c2.show();
    cout<<"\n The copy constructor is used:"<<endl;
    Complex c3(c2);
    c3.show();
    cout<<"\n - operator overloading:"<<endl;
    c2=-c2;
    c2.show();
    cout<<"\n it is created by pmh 18ce031";
}

