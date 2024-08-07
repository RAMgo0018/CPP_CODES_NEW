#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    if(a>b)
    max=a;
    else
    max=b;
    if(c>max)
    max=c;
    cout<<"the maximum number is"<<max;
    return 0;

}