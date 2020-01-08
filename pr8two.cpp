#include <iostream>
using namespace std;
int main()
{
int var1 = 43;
const int* ptr = &var1;
var1=34;
cout<<"var1 = "<< *ptr;
cout<<"\n it is created by pmh 18ce031";
return 0;
}
