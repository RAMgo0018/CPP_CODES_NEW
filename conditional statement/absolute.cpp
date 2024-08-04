#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter an integer value";
    cin>>num;
    if(num<0)
    {
        num=-num;
    }
    cout<<"absolute value of the input is"<<num;
    return 0;
    }

