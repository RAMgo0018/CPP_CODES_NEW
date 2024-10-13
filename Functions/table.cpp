#include<iostream>
using namespace std;
void table(int);
int main()
{
    int num;
    cout<<"enter the num";
    cin>>num;
    table(num);
    return 0;
}
void table(int n)
{
    for(int i=1;i<=10;i++)
    {
        cout<<i*n<<endl;
    }
}