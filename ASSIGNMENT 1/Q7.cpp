#include<iostream>
using namespace std;
int main()
{
    float bs;
    float DA;
    cout<<"enter basic salary";
    cin>>bs;
    if(bs<=3500)
    {
    DA=159.0/100*bs;
    }
    else if(bs>3500&&bs<=6000)
    {
        DA=159/100*3500;
    }
    else
    {
        DA=119/100*6000;
    }
    cout<<DA;
    return 0;
}