#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,rem=0,temp;
    cout<<"enter number";
    cin>>num;
    temp=num;
    while(num!=0)
    {
    rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;
    }
    cout<<"the reverse number is"<<rev<<endl;
    if(rev==temp)
    {
        cout<<"palendrome";    
        }
        else
        {
            cout<<"not palendrome";
        }
        return 0;

    
}