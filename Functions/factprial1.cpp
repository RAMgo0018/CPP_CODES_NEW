#include<iostream>
using namespace std;
int factorial(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int num,fact;
    cout<<"enter the number";
    cin>>num;
    fact= factorial(num);
    cout<<"factorial of a given number is "<<fact;
    return 0;

}