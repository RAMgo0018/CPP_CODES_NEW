#include<iostream>
using namespace std;
int main()
{
    int sum(int a,int b,int c=0,int d=0);
    int rs;
    rs=sum(1,2,3);
    cout<<rs<<endl;
    rs=sum(1,2);
    cout<<rs<<endl;
    rs=sum(1,2,3,4);
    cout<<rs;
}
int sum(int a,int b,int c,int d)
{
    return a+b+c+d;
}