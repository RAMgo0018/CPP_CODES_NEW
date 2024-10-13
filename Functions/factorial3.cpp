#include<iostream>
using namespace std;
int main()
{
    void factorial(int);
    int num;
    cout<<"enter the number";
    cin>>num;
    factorial(num);
    return 0;
}
void factorial(int n)
{
    int f=1,i=1;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<"factorial of the given number is"<<f;
}
