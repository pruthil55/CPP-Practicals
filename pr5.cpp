#include<iostream>
using namespace std;
int main()
{
    char str[30],*ptr;
    int vowel=0;
    ptr=str;
    cout<<"enter the name of string:";
    cin>>str;
    cout<<"\n";
    for(ptr=str;*ptr!='\0';ptr++)
    {
        if(*ptr=='a'||*ptr=='A'||*ptr=='e'||*ptr=='E'||*ptr=='i'|| *ptr=='I'||*ptr=='o'||*ptr=='O'||*ptr=='u'||*ptr=='U')
        {
            vowel++;
        }
    }
    cout<<"\n number of vowels:="<<vowel;
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}
