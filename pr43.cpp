#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream f("abc.txt",ios::out);
    char ch='A';
    for(int i=0;i<26;i++)
    {
        f.put(ch);
        ch++;
    }
    f.close();

    ifstream p("abc.txt");
    if(p.eof())
    {
        cout<<"End of file";
    }
    if(p.bad())
    {
        cout<<"Bad.";
    }
    if(p.good())
    {
        cout<<"Good.\n ";
    }
    if(p.fail())
    {
        cout<<"Fail.";
    }
    for(int j=1;j<27;j++)
    {
        p.seekg(-j,ios::end);
        p.get(ch);
        cout<<ch;
    }
    cout<<"\n it is created by pmh 18ce031";
    return 0;
}

