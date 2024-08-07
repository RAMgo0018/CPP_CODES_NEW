#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    max=a;
    else if(b>c&&b>a)
    max=b;
    else
    max=c;
    
    cout<<"maximum of three numbers is"<<max;
    return 0;
}
