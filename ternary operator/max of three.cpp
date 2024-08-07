#include<iostream>
using namespace std;
int main()
{
int a,b,c,max;
cout<<"enter 3 numbers";
cin>>a>>b>>c;
max=a>b?(a>c?a:c):(b>c?b:c);
cout<<"maximum of three numbers is"<<max;
return 0;
}