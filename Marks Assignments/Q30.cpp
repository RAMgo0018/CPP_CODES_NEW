#include<iostream>
using namespace std;
int main()
{
    int rows,col;
    int arr[6]={-4,-4,6,2,9,3};
    int highest=arr[0];
    for(int i=0;i<=5;i++)
    {
        if(arr[i]>highest)
        highest=arr[i];
    }
    for(rows=highest;rows>=1;rows--)
    {
    for(col=0;col<=5;col++)
    {
        if(arr[col]>=rows)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
    }
}