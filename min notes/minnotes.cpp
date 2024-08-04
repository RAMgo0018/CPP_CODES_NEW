#include<iostream>
using namespace std;
int main()
{
    int tt,ot,fh,th,oh,fy,ty,t,f,two,o,total,amount;
    cout<<"enter amount";
    cin>>amount;
        tt=amount/2000;
        amount=amount%2000;
    
        ot=amount/1000;
        amount=amount%1000;
    
        fh=amount/500;
        amount=amount%500;
    
        th=amount/200;
        amount=amount%200;

        oh=amount/100;
        amount=amount%100;
    
        fy=amount/50;
        amount=amount%50;
    
        ty=amount/20;
        amount=amount%20;
    
        t=amount/10;
        amount=amount%10;
    
        f=amount/5;
        amount=amount%5;
    
        two=amount/2;
        amount=amount%2;

        o=amount/1;
        amount=amount%1;
    
    total=tt+ot+fh+th+oh+fy+ty+t+f+two+o;
    cout<<"min number of notes required is="<<total;
    return 0;



}