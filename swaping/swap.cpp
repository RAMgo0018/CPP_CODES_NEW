# include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter two number";
    cin>>a>>b;
    cout<<"a is "<<a<<"b is "<<b <<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<" now a is"<<a<<"b is "<<b;
    return 0;
}