#include<iostream>
#include<cstring>
using namespace std;
class String
{
    char s[100];
public:
    String()
    {
        strcpy(s,"");
    }
    String(char s1[])
    {
        strcpy(s,s1);
    }
    void get()
    {
        cout<<"Enter the string :";
        cin>>s;
    }
    void put()
    {
        cout<<"string is :"<<s<<endl;
    }

    String operator+(String s2)
    {
        String s3;
        strcpy(s3.s,s);
        strcat(s3.s,s2.s);
        return s3;
    }
    void operator==(String s2)
    {
        int i,j;
        i=strlen(s);
        j=strlen(s2.s);
        if(i<j)
        {
            cout<<s<<"\n s is small as compare to "<<s2.s<<endl;
        }
        else if(j<i)
        {
            cout<<s<<"\n s is big as compare to "<<s2.s<<endl;
        }
        else
        {
            cout<<s<<" and "<<s2.s<<"\n both length are same."<<endl;
        }
    }
    void operator+=(String s2)
    {
            strcat(s,s2.s);
    }
};
int main()
{
    String S1,S2("hirpara"),S3;
    S1.get();
    cout<<"\n using + operator:"<<endl;
    S3=S1+S2;
    S3.put();
    cout<<"\n using == operator:"<<endl;
    S1==S2;
    cout<<"\n using += operator:"<<endl;
    S1+=S2;
    S1.put();
    cout<<"\n it is created by pmh 18ce031";
}


