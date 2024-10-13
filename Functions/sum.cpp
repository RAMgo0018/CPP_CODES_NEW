#include<iostream>
using namespace std;
int main()
{
    int a,b,res;
    cout<<"enter two number";
    cin>>a>>b;
    res=sum(a,b);
    cout<<"the sum of two numbers is"<<res;
    return 0;
}
int sum(int x,int y)
{
    int c;
    c=x+y;
    return c;
}