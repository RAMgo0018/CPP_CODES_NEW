#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter a positive number";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum of"<<n<<"natural number is ="<<sum;
    return 0;
}