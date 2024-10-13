#include<iostream>
using namespace std;
 void calculate(int a,int b,int &s,int &d,int &p);
int main()
{
    int a,b,sum,diff,pro;
    cout<<"enter a and b";
    cin>>a>>b;
    calculate(a,b,sum,diff,pro);
    cout<<"sum is"<<sum;
    cout<<"difference is"<<diff;
    cout<<"product is"<<pro;
}
void calculate(int a,int b,int &s,int &d,int &p)
{
    s=a+b;
    d=a-b;
    p=a*b;

}