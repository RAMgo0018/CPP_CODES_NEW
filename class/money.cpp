#include<iostream>
using namespace std;
class money
{
    private:
    int rs;
    int paisa;
    public:
    void read();
    void display();
    money(int r=0,int p=0);
    money(const money&m);
    money operator+(money&m);
    money operator-(money&m);
    money operator*(int n);
    money operator++();
    money operator++(int x);
    money operator--();
    money operator--(int x);
    int operator<(money&m);
    int operator>(money&m);
    operator int();
    operator float();
    friend ostream &operator<<(ostream &os,money m);
    friend istream &operator>>(istream &is,money &m);
};
void money::display()
{
    cout<<rs<<"."<<paisa;
}
void money::read()
{
    cin>>rs>>paisa;
}
money::money(int r,int p)
{
    rs=r;
    paisa=p;
}
money::money(const money&m)
{
    rs=m.rs;
    paisa=m.paisa;
}
money money::operator-(money&m)
{
    money temp;
    int n1,n2,n3;
    n1=rs*100+paisa;
    n2=m.rs*100+m.paisa;
    if(n1>n2)
    {
        n3=n1-n2;
    }
    else
    {
        n3=n2-n1;
    }
    temp.rs=n3/100;
    temp.paisa=n3%10;
    return temp;
}
money money::operator*(int n)
{
    money temp;
    temp.rs=rs*n;
    temp.paisa=paisa*n;
    temp.rs=temp.rs +(temp.paisa/100);
    return temp;
}
money money::operator+(money&m)
{
    money temp;
    temp.rs=rs+m.rs;
    temp.paisa=paisa +m.paisa;
    if(temp.paisa>=100)
    {
        temp.rs++;
        temp.paisa=temp.paisa%100;
    }
    return temp;
}
money money::operator++()
{
    money temp;
    rs++;
    temp.rs=rs;
    temp.paisa=paisa;
    return temp;
}
money money::operator--()
{
    money temp;
    rs--;
    temp.rs=rs;
    temp.paisa=paisa;
    return temp;

}
money money::operator--(int x)
{
    money temp;
    temp.rs=rs;
    temp.paisa=paisa;
    rs--;
    return temp;
}
money money::operator++(int x)
{
    money temp;
    temp.rs=rs;
    temp.paisa=paisa;
    rs++;
    return temp;
}
int money::operator<(money&m)
{
    int n1,n2;
    n1=rs*100+paisa;
    n2=m.rs*100+m.paisa;
    if(n1<n2)
    return 1;
    else 
    return 0;
}
int money::operator>(money&m)
{
    int n1,n2;
    n1=rs*100+paisa;
    n2=m.rs*100+m.paisa;
    if(n1>n2)
    return 1;
    else
     return 0;
}
money::operator int()
{
    int res;
    res=rs*100+paisa;
    return res;
}
money::operator float()
{
    float res;
    res=rs*100+paisa;
    res/=100;
    return res;
}
ostream&operator<<(ostream &os,money m)
{
    os<<m.rs<<"."<<m.paisa;
    return os;
}
istream&operator>>(istream &is,money &m)
{
    is>>m.rs>>m.paisa;
    return is;
}
int main()
{
    money m1,m2,m3,m4,m5;
    cout<<"\n Enter an amount";
    m1.read();
    cout<<"\n Enter second amount";
    m2.read();
    m3=m1+m2;
    cout<<"\n added amount is";
    m3.display();
    m4=m1-m2;
    cout<<"\n subtracted amount is";
    m4.display();
    int no;
    cout<<"\n Enter number of times m4 is to be multiplied";
    cin>>no;
    m5=m4*no;
    cout<<"\n multiplied amount is";
    m5.display();
    money m6(4,20);
    money m7(5,10);
    money m8,m9,m10,m11;
    m8=++m6;
    cout<<"\n m6 is";
    m6.display();
    cout<<"\n m8 is";
    m8.display();
    m9=m7++;
    cout<<"\n m7 is ";
    m7.display();
    cout<<"\n m9 is";
    m9.display();
    m10=--m6;
    cout<<"\n m6 is";
    m6.display();
    cout<<"\n m10 is";
    m10.display();
    m11=m7--;
    cout<<"\n m7 is";
    m7.display();
    cout<<"\n m11 is";
    m11.display();

    money m12(8,30);
    money m13(4,99);
    if(m12<m13)
    {
        cout<<"\n second amount is greater";
    }
    else
    {
        cout<<"\n first amount is greater";
    }
    money m14(4,40);
    int a;
    a=m14;
    float b;
    b=m14;
    cout<<a<<"\n"<<b<<"\n"; 
    money m15;
    cout<<"\n entered an amount: ";
    cin>>m1;
    cout<<"\n Entered amount is";
    cout<<m1;
}
