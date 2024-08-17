#include<iostream>
using namespace std;
int main()
{
    int num,i,temp;
    cout<<"enter number which you want to check";
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            temp=1;
        }
    }
    if(temp==1)
    {
        cout<<"the number is not prime";
    }
    else
    {
        cout<<"the number is prime";
    }
    return 0;
}