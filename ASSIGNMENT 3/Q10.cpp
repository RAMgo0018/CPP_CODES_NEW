#include<iostream>
using namespace std;
 static int c=0;
int main()
{
    int i;
    void count();
    for(i=0;i<5;i++)
    {
    count();
    }
    cout<<c;
}
void count()
{
    c++;
}