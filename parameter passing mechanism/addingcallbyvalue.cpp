#include<iostream>
using namespace std;
int main()
{
    int a;
    void change(int);
    cout<<"enter value";
    cin>>a;
    cout<<" a is"<<a<<endl;
    change(a);
    cout<<"now a is"<<a;
}
void change(int x)    //here value changes in formal parameters are not reflected in actual parameters;
{
    x=x+10;
}