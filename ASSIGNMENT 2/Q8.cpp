#include<iostream>
using namespace std;
int main()
{
int n,arm,rem=0,temp;
for(n=1;n<=1000;n++)
{
    temp=n;
    while(n!=0)
    {
    rem=n%10;
    arm=arm+(rem*rem*rem);
    n=n/10;
    }
    if (arm==temp)
    cout<<n;
}
return 0;
}