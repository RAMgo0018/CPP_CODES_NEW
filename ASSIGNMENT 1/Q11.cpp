#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three sides";
    cin>>a>>b>>c;
    if(a==b==c)
    {
        cout<<"equilateral";
    }
    else{
        cout<<"non equilateral";
    }
    return 0;
}