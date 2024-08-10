#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter first side";
    cin>>a;
    cout<<"enter second side";
    cin>>b;
    cout<<"enter third side";
    cin>>c;
    if(a==b||a==c||b==c)
    {
        cout<<"isoseles";
    }
    else
    {
        cout<<"non isosceles";
    }
    return 0;
}