#include<iostream>
using namespace std;
int main()
{
    int num,res;
    cout<<"enter the number whose digits u want";
    cin>>num;
    int digits(int);
    res=digits(num);
    cout<<"the number of digits in  the number is"<<res;
    return 0;

}
int digits(int num)
{
    int rem,count=0;
    while(num!=0)
    {
        rem=num%10;
        count ++;
        num=num/10;
    }
    return count;
}