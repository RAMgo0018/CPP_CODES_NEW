#include<iostream>
using namespace std;
int main()
{
    int num,temp,arm,rem=0;
    cout<<"enter the number which you want to check";
    cin>>num;
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        arm=arm+(rem*rem*rem);
        num=num/10;
    }
    if(temp==arm)
    cout<<"the number is armstrong";
    else
    cout<<"the number is not armstrong";
    return 0;
}