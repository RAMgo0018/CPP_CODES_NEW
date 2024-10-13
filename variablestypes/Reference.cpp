#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &c=a;
    c=c+1;
    cout<<"normal value is"<<a;
    cout<<"reference value is"<<c;
}


