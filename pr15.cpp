#include<iostream>
using namespace std;
class rectengle
{
    float height,width;
    public:
    void getvalue(float h,float w)
    {
        height=h;
        width=w;
    }
    float area()
    {
      return height*width;
    }
}r;
int main()
{
    float w,h;
    cout<<"enter height:";
    cin>>h;
    cout<<"\n enter width:";
    cin>>w;
    r.getvalue(h,w);
    cout<<"\n area :"<<r.area();
  cout<<"\n it is created by pmh 18ce031";
  return 0;
}
