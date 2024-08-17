#include<iostream>
using namespace std;
int main()
{
    int num,max,i,count=1,maxcount=1;
    cout<<"enter first number";
    cin>>num;
    max=num;
    for(i=1;i<10;i++)
    {
        cout<<"enter next number";
        cin>>num;
        if(num>max)
        {
        max=num;
        count=count+1;
        cout<<"count is"<<count;
        }
        if(count>maxcount)
        {
            maxcount=count;
        }
        else
        {
            count=1;
        }
        cout<<maxcount;
        
    

    }
}
