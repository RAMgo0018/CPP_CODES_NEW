#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int num,fact;
    cout<<"enter number";
    cin>>num;
    fact=factorial(num);
    cout<<"factorial ofa given number is"<<fact;

}
int factorial(int n)
{
    int f=1,i=1;
    for(;i<=n;i++)
    {
        f*=i;
    }
    return f;
}