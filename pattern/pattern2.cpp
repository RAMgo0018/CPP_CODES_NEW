#include<iostream>
using namespace std;
int main()
{
    int l,i,j;
    cout<<"enter number of line syou want to enter";
    cin>>l;
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}