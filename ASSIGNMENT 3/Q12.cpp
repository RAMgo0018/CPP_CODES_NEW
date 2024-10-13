#include<iostream>
using namespace std;
int main()
{
    int num,res;
    cout<<"enter the number";
    cin>>num;
    int rev(int);
    res=rev(num);
    cout<<"the reverse of the guven number is"<<res;
}
int rev(int num)
{int rem,r=0;
    while(num!=0)
    {
        rem=num%10;
        r=(r*10)+rem;
        num=num/10;
    }
    return r;
}