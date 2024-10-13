#include<iostream>
using namespace std;
int main()
{
    int a,res;
    cout<<"enter the number";
    cin>>a;
    int prime(int);
    res=prime(a);
    cout<<res;
}
int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}

