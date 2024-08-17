#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem;
    cout<<"enter a integer number";
    cin>>num;
    if(num>0)
    {
        num=-num;
    }
    do
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    } while (num!=0);
    cout<<"sum of digits is ="<<sum;
    return 0;
}