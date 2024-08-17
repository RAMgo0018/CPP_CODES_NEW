#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    char ch;
    do{
        cout<<"\n Enter two values";
        cin>>a>>b;
        sum=a+b;
        cout<<"\n sum of two given values is"<<sum;
        cout<<"\n if you want to perform more add operation(y or n)";
        cin>>ch;
    }
    while(ch=='Y'||ch=='y');
    return 0;
}