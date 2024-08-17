#include<iostream>
using namespace std;
int main()
{ int i,j,l;
cout<<"enter number of line you want to print";
cin>>l;
for(i=1;i<=l;i++)
{
    for(j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
return 0;

}