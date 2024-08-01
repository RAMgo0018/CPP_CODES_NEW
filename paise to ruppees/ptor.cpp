#include<iostream>
using namespace std;
int main()
{
    int fy,tf,tw,t,f;
    float amount;
    cout<<" enter number of 50 paise coins";
    cin>>fy;
    cout<<"enter number of twenty five paise coins";
    cin>>tf;
    cout<<"enter number of twenty paise coins";
    cin>>tw;
    cout<<"enter number of ten paise notes";
    cin>>t;
    cout<< "enter number of five paise notes";
    cin>>f;
    amount=(50*fy)+(25*tf)+(20*tw)+(10*t)+(5*f);
    amount=amount/100;
    cout<<"amount in ruppess is"<<amount;
    return 0;
}