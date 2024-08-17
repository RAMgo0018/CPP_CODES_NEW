#include<iostream>
using namespace std;
int main()
{
    int fact=1,i,n;
    cout<<"enter number whose factorial you want";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"fatorial of"<<n<<"is equals to"<<fact;
}
