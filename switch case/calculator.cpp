#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"enter numbers";
    cin>>a>>b;
    cout<<"enter choice";
    cin>>n;
    switch(n)
    {
        case 1: cout<<"sum is "<<a+b;
        break;
        case 2: cout<<"differnce is "<<a-b;
        break;
        case 3: cout<<"multiplication is "<<a*b;
        break;
        case 4: cout<<"divison is "<<a/b;
        break;
        default: cout<<"wrong choice";
    }
    return 0;
}
