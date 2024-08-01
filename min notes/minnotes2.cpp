#include<iostream>
using namespace std;
int main()
{
    int tt,ot,fh,th,oh,fy,ty,t,f,two,o,amount;
    cout<<"enter amount";
    cin>>amount;
    if(amount>=2000)
    {
        tt=amount/2000;
        amount=amount-(tt*2000);
    }
    if(amount>=1000)
    {
        ot=amount/1000;
        amount=amount-(ot*1000);
    }
    if(amount>=500)
    {
        fh=amount/500;
        amount=amount-(fh*500);
    }
    if(amount>=200)
    {
        th=amount/200;
        amount=amount-(th*200);
    }
     if(amount>=100)
    {
        oh=amount/100;
        amount=amount-(oh*100);
    }
     if(amount>=50)
    {
        fy=amount/50;
        amount=amount-(fy*50);
    } 
    if(amount>=20)
    {
        ty=amount/20;
        amount=amount-(ty*20);
    }
     if(amount>=10)
    {
        t=amount/10;
        amount=amount-(t*10);
    }
     if(amount>=5)
    {
        f=amount/5;
        amount=amount-(f*5);
    }
     if(amount>=2)
    {
        two=amount/2;
        amount=amount-(two*2);
    } 
    if(amount>=1)
    {
        o=amount/1;
        amount=amount-(o*1);
    }
    cout<< "minimum number of notes or coins needed"<<endl;
    cout<<"of 2000 is"<<tt<<endl;
    cout<<"of 1000 is"<<ot<<endl;
    cout<<"of 500 is"<<fh<<endl;
    cout<<"of 200 is"<<endl;
    cout<<"of 100 is"<<oh<<endl;
    cout<<"of 50 is"<<fy<<endl;
    cout<<"of 20 is"<<ty<<endl;
    cout<<"of 10 is"<<t<<endl;
    cout<<"of 5 is"<<f<<endl;
    cout<<"of 2 is"<<two<<endl;
    cout<<"of 1 is"<<o<<endl;
    return 0;
}

