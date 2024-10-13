#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number";
    cin>>num;
    void check(int);
    check(num);
    
}
void check(int n)
{
    int temp=n;
    int rem,r=0;
    while(n!=0)
    {
    rem=n%10;
    r=r+rem*rem*rem;
    n=n/10;
    }
    if(temp==r)
    {
        cout<<"number is armstrong";
    }
    else{
        cout<<"number is not armstrong";
    }
}