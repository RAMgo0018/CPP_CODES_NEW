#include<iostream>
using namespace std;
int main()
{
    void add(int,int);
    void add(float,float);
    int a,b;
    cout<<"enter integer values";
    cin>>a>>b;
    float c,d;
    cout<<"enter float values";
    cin>>c>>d;
    add(a,b);
    add(c,d);
}
void add(int x,int y)
{
    cout<<"sum of integer values is"<<x+y<<endl;
}
void add(float x,float y)
{
    cout<<"sum of integer values is"<<x+y<<endl;
}