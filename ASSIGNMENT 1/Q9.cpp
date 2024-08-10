#include<iostream>
using namespace std;
int main()
{
    int h,b,p,area;
    cout<<"enter height";
    cin>>h;
    cout<<"enter base";
    cin>>b;
    cout<<"enter perpendicular";
    cin>>p;
    if(b+h>p&&b+p>h&&h+p>b)
    {
        cout<<"three sides forms a triangle"<<endl;
        area=0.5*b*h;
        cout<<"area of triangle is "<<area;
    }
    else{
        cout<<"three sides do mot forms a triangle";
    }
    return 0;
}