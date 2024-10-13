#include<iostream>
using namespace std;
int main()
{
    int a,b;
    void swap(int,int);
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"a is"<<a<<endl<<"b is"<<b<<endl;
    swap(a,b);
    cout<<" now a is"<<a<<endl<<"now b is"<<b; 

}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<< "x is"<<x<<endl<<"y is"<<y<<endl;

}