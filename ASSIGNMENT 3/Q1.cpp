#include<iostream>
using namespace std;
int main()
{
    int a,b,res;
    int power(int,int);
    cout<<"enter the number whose power you want";
    cin>>a;
    cout<<"enter the power";
    cin>>b;
    res=power(a,b);
    cout<<"the power is"<<res;
    return 0;
}
int power(int a,int b)
{
    int pow=1,i;
    for(i=0;i<b;i++)
    {
    pow=pow*a;
    }
    return pow;
}