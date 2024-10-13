#include<iostream>
using namespace std;
int main()
{
    int a=10;
    const int&b=a;
    cout<<a<<endl; //10
    cout<<b<<endl;       //10  
    //b=20;        Here it is compile time error;
    a=20;
    cout<<a<<endl;
    cout<<"\n"<<b;
    return 0;

}