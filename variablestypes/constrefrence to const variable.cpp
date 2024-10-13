#include<iostream>
using namespace std;
int main()
{
    const int a=10;
    const int &b=a;
    cout<<a<<endl<<b;
   /* a=20;
    b=30;
    cout<<a<<b;*/ //here we cannot change constant variables be it reference or normal
}