#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if(a<b)
    {
        if(a<c)
        cout<<"smallest is"<<a;
        else
        cout<<"smallest is"<<c;
    }
    else
    {
        if(b<c)
        cout<<"smallest is"<<b;
        else
        cout<<"smallest is"<<c;
    }
    return 0;
}