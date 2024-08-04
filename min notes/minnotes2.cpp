#include<iostream>
using namespace std;
int main()
{
    int tt,ot,fh,th,oh,fy,ty,t,f,two,o,amount,total;
    cout<<"enter amount";
    cin>>amount;
    
        tt=amount/2000;
        amount=amount-(tt*2000);
    
        ot=amount/1000;
        amount=amount-(ot*1000);
    
        fh=amount/500;
        amount=amount-(fh*500);
    
        th=amount/200;
        amount=amount-(th*200);
    
        oh=amount/100;
        amount=amount-(oh*100);
    
        fy=amount/50;
        amount=amount-(fy*50);
    
        ty=amount/20;
        amount=amount-(ty*20);
    
        t=amount/10;
        amount=amount-(t*10);
    
        f=amount/5;
        amount=amount-(f*5);
    
        two=amount/2;
        amount=amount-(two*2);
    
        o=amount/1;
        amount=amount-(o*1);
        total= tt+ot+fh+th+oh+fy+ty+t+f+two+o;
        cout<<"min number of notes is"<<total;

    return 0;
}

