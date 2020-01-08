#include<iostream>
using namespace std;
int maxi(int []);
int main()
{
 int a[5]={1,2,7,4,9},y;
 y=maxi(a);
 cout<<"maximum number is="<<y;
 cout<<"\n it is created by pmh 18ce031";
 return 0;
}
int maxi(int b[])
{
    static int i=1,m=b[0];
    if(i<5)
    {
        if(b[i]>m)
        {
            m=b[i];
            if(i<5)
            {
                maxi(b);
            }
        }
        else
        {
            i++;
            maxi(b);
        }
    }
    return m;
}
