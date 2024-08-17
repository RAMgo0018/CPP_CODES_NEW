#include<iostream>
using namespace std;
int main()
{
    int a,b,i,pow=1;
    cout<<"enter base number";
    cin>>a;
    cout<<"enter exponential number";
    cin>>b;
    for(i=0;i<b;i++)
    {
        pow=pow*a;
    }
    cout<<"the power of "<<a<<"raise to the power"<<b<<"is equals to"<<pow;
    return 0;
}