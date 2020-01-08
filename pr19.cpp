#include<iostream>
using namespace std;
class dist
{
    int feet;
    float inches;
public:
    void get()
    {
        cout<<"enter feet:";
        cin>>feet;
        cout<<"\n enter inches:";
        cin>>inches;
    }
    void display()
    {

        cout<<"\n distance is:"<<feet<<"'"<<inches<<"''";
    }
    void scale(dist &,float);
};
void dist::scale(dist &d,float sf)
{
    feet=d.feet*sf;
    inches=d.inches*sf;
}
int main()
{
    dist d1;
    d1.get();
    d1.display();
    float sf;
    cout<<"\n enter the value of scale factore:";
    cin>>sf;
    d1.scale(d1,sf);
    d1.display();
    cout<<"\n it is created by pmh 18ce031";
}
