#include<iostream>
using namespace std;
int main()
{
    int i,n,temp;
    for(n=1;n<1000;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                temp=1;
            }
        }
        if(temp!=1)
        {
            cout<<n;
        }
    }
}