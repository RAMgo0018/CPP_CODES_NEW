#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    void palendrome(int);
    palendrome(num);
}
void palendrome(int num)
{
    int temp=num;
    int rem,r=0;
    while(num!=0)
    {
        rem=num%10;
        r=(r*10)+rem;
        num=num/10;
    }
    if(temp==r)
    {
        cout<<"palendrome";
    }
    else
    {
        cout<<"not palendrome";
    }
}