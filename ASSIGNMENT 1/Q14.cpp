#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"enter cost price"<<endl;;
    cin>>cp;
    cout<<"enter selling price"<<endl;
    cin>>sp;
    if(sp>cp)
    {
        int profit;
        profit=sp-cp;
        cout<<profit;
    }
    else if(cp>sp)
    {
        int loss;
        loss=sp-cp;
        cout<<loss;
    }
    return 0;
}
