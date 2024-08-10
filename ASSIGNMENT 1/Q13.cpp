#include<iostream>
using namespace std;
int main()
{
    int ch1,ch2,ch3;
    cout<<"enter choice for martial status"<<endl;
    cout<<"enter1 for married and enter 2 for non married"<<endl;
    cin>>ch1;
    cout<<"enter choice for gender"<<endl;
    cout<<"enter1 for male and enter2 for female"<<endl;
    cin>>ch2;
    cout<<"enter age";
    cin>>ch3;
    if(ch1==1)
    {
        cout<<"insure the driver";
    }
    else if((ch1==2)&&(ch2==10)&&(ch3>30))
    {
        cout<<"insure the driver";
    }
    else if((ch1==2)&&(ch2==2)&&(ch3>25))
    {
        cout<<"insure the driver";
    }
    else
    {
        cout<<"not insure";
    }
    return 0;
}