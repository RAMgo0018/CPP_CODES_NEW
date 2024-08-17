#include<iostream>
using namespace std;
int main()
{
    int l,i,j;
    cout<<"Enter how many lines you want to print:";
    cin>>l;
    int a=1,b;
    for(i=1;i<=l;i++)
    {
        b=i-1;
        for(j=1;j<=a;j++)
        {
            if(j<=i)
            {
                cout<<j;
            }
            else
            {
                cout<<b;
                b--;
            }
        }
        a+=2;
        cout<<endl;
    }
    return 0;
}