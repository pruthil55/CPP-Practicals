#include<iostream>
using namespace std;
class celsius
{
  float c1;
  public:
      celsius()
      {
      }
    celsius(float f)
    {
        c1=f;
    }
    operator float()
    {
        return c1;
    }
    void print()
    {
        cout<<"\n the value of c1:"<<c1;
    }
};
int main()
{
    celsius C1;
    C1=30.5f;
    C1.print();
    float tempreture;
    tempreture=C1;
    cout<<"\n value of tempreture is :"<<tempreture;
    cout<<"\n it is created by pmh 18ce031.";
    return 0;
}
