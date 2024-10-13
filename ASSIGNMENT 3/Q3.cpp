#include<iostream>
using namespace std;
int main()
{
    float a,b,c,res;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    float max(float,float,float);
    res=max(a,b,c);
    cout<<"the maximum of three numbers is"<<res;

}
float max(float a,float b,float c)
{
    float ans;
   ans= a>b?((a>c)?a:c):((b>c)?b:c);
   return ans;
}