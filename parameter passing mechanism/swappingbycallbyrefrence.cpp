#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
int main()
{
    int a,b;
    cout<<"enter two values"<<endl;
    cin>>a>>b;
    cout<<"initially a is"<<a<<"\n initially b is"<<b<<endl;
    swap(a,b);
    cout<<"now a is"<<a<<endl<<"now b is"<<b;
    return 0;
}
