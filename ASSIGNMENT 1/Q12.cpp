#include<iostream>
using namespace std;
int main()
{
    int b,h,p,mul;
    cout<<"enter base";
    cin>>b;
    cout<<"enter hypotenuse";
    cin>>h;
    cout<<"enter perpendicular";
    cin>>p;
    
    if(b+h>p&&b+p>h&&h+p>b)
    {
     if(h*h==(b*b)+(p*p))
    {
    cout<<"right angle triangle";
    }
    else
    cout<<"not a right angle triangle";
}
else
{
    cout<<"not a triangle";
}
return 0;
}