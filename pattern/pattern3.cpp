#include<iostream>
using namespace std;
int main()
{
    int l,i,j;
    cout<<"enter how many lines you want";
    cin>>l;
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=l;j++)
        {
            if(j<=l-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}