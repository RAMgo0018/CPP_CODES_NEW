#include<iostream>
using namespace std;
int main()
{
    int n,sum,avg;
    cout<<"enter length of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    avg=sum/10;
    cout<<"\n avg is ="<<avg;
    cout<<"\n values above average are"<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>avg)
        cout<<arr[i]<<endl;
    }
    return 0;
}