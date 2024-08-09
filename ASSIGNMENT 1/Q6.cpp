#include<iostream>
using namespace std;
int main()
{
    int a,b,c,min,smin;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if(a<b)
    {
        min=a;
    }
    else
    {
        min=b;
    }
    if(c<min)
    {
        c=min;
        smin=min;
    }
    else if(c<smin)
    {
        smin=c;
    }
    cout<<"second minimum is"<<smin;
    return 0;
}