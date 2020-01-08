#include<iostream>
#include<iomanip>
using namespace std;
void divide(int,int);
void divide(int);
float divide(float,float,float);
int main()
{
  int a,b,c;
  float x,y,z,q;
  cout<<"enter numratore :";
  cin>>a;
  cout<<"\n enter dinomiratore:";
  cin>>b;
  divide(a,b);
  cout<<"\n enter one integer value to check prime num:";
  cin>>c;
  divide(c);
  cout<<"\n enter three floating number to get avg of the num:";
  cin>>x>>y>>z;
  q=divide(x,y,z);
  cout<<"\n avg:"<<fixed<<setprecision(2)<<q;
  cout<<"\n it is created by pmh 18ce031";
  return 0;
}
void divide(int a, int b)
{
 if(a%b==0)
 {
     cout<<"\n divisable";
 }
 else
 {
     cout<<"\n not divisable";
 }
}
void divide(int c)
{
    int i,flag=0;
    if(c==1)
    {
        cout<<"\n number is neutral";
    }
    for(i=2;i<c;i++)
    {
        if(c%i==0)
        {
            flag++;
        }
    }
        if(flag==0)
        {
            cout<<"\n number is prime";
        }
        else
        {
            cout<<"\n number is not prime";
        }

}
float divide(float x,float y,float z)
{
    float sum;
    sum=x+y+z;
    return sum/3;
}
