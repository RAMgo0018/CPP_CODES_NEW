#include<iostream>
using namespace std;
int main()
{
    int i=1,num;
    cout<<"enter number whose table you want";
    cin>>num;
    while(i<=10)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<"\n";
        i++;
    }
    return 0;
}