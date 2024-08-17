#include<iostream>
using namespace std;
int main()
{
    int rem=0,num,rev;
    cout<<"enter number whose reverse you want";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    cout<<"the reversed number is"<<rev;
    return 0;
}
