#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<"greatest is"<<a;
        else
        cout<<"gretaest is"<<c;
    }
    else
    {
        if(b>c)
        cout<<" greatest is"<<b;
        else
        cout<<"greatest is"<<c;
    }
    return 0;
} 