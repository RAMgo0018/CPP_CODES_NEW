#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,sum,n,i;
    cout<<"enter number of terms you want in the series and enter minimum 2 terms";
    cin>>n;
    cout<<a;
    cout<<b;
    sum=a+b;
    for(i=3;i<=n;i++)
    {
        a=b;
        b=sum;
        sum=a+b;
        cout<<sum;
    }
    return 0;
    
}